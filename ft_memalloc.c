/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:07:12 by nsena             #+#    #+#             */
/*   Updated: 2019/09/19 12:21:21 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*area;
	size_t	i;

	i = 0;
	if (!(area = (char*)malloc(size * sizeof(char))))
		return (NULL);
	else
		ft_bzero(area, size);
	return (area);
}
