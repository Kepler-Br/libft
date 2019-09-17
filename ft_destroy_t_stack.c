/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_t_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:54:07 by nsena             #+#    #+#             */
/*   Updated: 2019/09/17 13:54:25 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_destroy_t_stack(t_stack *object)
{
	t_stack_item	*pointer;
	t_stack_item	*next_pointer;

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
