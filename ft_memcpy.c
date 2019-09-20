/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:07:24 by nsena             #+#    #+#             */
/*   Updated: 2019/09/20 14:01:50 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d;
	const char *s;

	d = dst;
	s = src;
	if (!n || src == dst)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
