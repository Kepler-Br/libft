/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:20:31 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:29:26 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		print_hex(char ch)
{
	char new_c;

	new_c = (ch & 0b11110000) >> 4;
	if (new_c >= 10)
		ft_putchar('a' + new_c - 10);
	else
		ft_putchar('0' + new_c);
	new_c = (ch & 0b1111);
	if (new_c >= 10)
		ft_putchar('a' + new_c - 10);
	else
		ft_putchar('0' + new_c);
}

static int		get_padding(int nb)
{
	int space_count;
	int letters_count;

	space_count = (nb / 2);
	letters_count = nb * 2;
	return (40 - space_count - letters_count);
}

static void		print_memory_char(void *mem, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (((char*)mem)[i] >= ' ' && ((char*)mem)[i] <= 'w')
			write(1, &((char*)mem)[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

static void		print_times(char ch, size_t times)
{
	while (times > 0)
	{
		write(1, &ch, 1);
		times--;
	}
}

void			ft_print_memory(void *mem, size_t size)
{
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	while (i < size)
	{
		if (count == 16)
		{
			print_memory_char(&((char *)mem)[i - 16], 16);
			write(1, "\n", 1);
			count = 0;
		}
		print_hex(((char *)mem)[i]);
		if ((i + 1) % 2 == 0)
			write(1, " ", 1);
		count++;
		i++;
	}
	print_times(' ', get_padding(count));
	print_memory_char(&((char *)mem)[i - count], count);
}
