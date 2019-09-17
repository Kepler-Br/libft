/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:08:06 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:14:57 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *arr, size_t arr_size, size_t size)
{
	void *new;

	if (!arr)
		return (NULL);
	if (size == 0)
		return (arr);
	new = malloc(arr_size + size);
	new = ft_memcpy(new, arr, arr_size);
	free(arr);
	return (new);
}
