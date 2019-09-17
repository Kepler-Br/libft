/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_skip_symbols.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:53:30 by nsena             #+#    #+#             */
/*   Updated: 2019/09/17 13:53:54 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_char_in_set(char symbol, char *set)
{
	while (*set)
	{
		if (symbol == *set)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_str_skip_symbols(char *str, char *symbols)
{
	while (*str)
	{
		if (is_char_in_set(*str, symbols))
			str++;
		else
			break ;
	}
	return (str);
}
