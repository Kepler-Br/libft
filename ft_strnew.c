/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:08:59 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 14:52:22 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new_str;
	size_t	i;

	new_str = (char*)malloc((size + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		new_str[i] = 0;
		i++;
	}
	return (new_str);
}
