/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_deque_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:06:36 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:12:26 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_destroy_t_deque(t_deque *object)
{
	t_deque_item	*pointer;
	t_deque_item	*next_pointer;

	pointer = object->bottom;
	while (pointer)
	{
		next_pointer = pointer->next;
		free(pointer->data);
		free(pointer);
		pointer = next_pointer;
	}
	free(object);
}
