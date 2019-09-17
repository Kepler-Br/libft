/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:08:49 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:39 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, int nb)
{
	char	*begin;
	int		index;

	begin = dest;
	dest = dest + ft_strlen(dest);
	index = 0;
	while (*src != '\0' && index < nb)
	{
		*dest++ = *src++;
		index++;
	}
	*dest = '\0';
	return (begin);
}
