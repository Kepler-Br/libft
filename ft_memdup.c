/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 16:01:14 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 16:01:33 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memdup(const void *data, size_t data_size)
{
	char *new_data;
	char *new_data_pointer;
	char *old_data_pointer;

	if (!(new_data = (char *)malloc(data_size)) || !data)
		return (NULL);
	new_data_pointer = new_data;
	old_data_pointer = (char *)data;
	while (data_size--)
	{
		*new_data_pointer = *old_data_pointer;
		old_data_pointer++;
		new_data_pointer++;
	}
	return (new_data);
}
