/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:07:57 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:38 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = (nb / 10);
		ft_putnbr_fd(-nb, fd);
		ft_putchar_fd('8', fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-nb, fd);
	}
	else
	{
		if (nb >= 10)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
		ft_putchar_fd((nb % 10) + 48, fd);
	}
}
