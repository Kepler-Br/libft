/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_t_stack_make2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:01:46 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:13:26 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		t_stack_size(t_stack *this)
{
	t_stack_item	*pointer;
	size_t			size;

	size = 0;
	if (!this->bottom)
		return (0);
	pointer = this->bottom;
	size++;
	while (pointer->next)
	{
		pointer = pointer->next;
		size++;
	}
	return (size);
}

void				ft_make_t_stack2(t_stack *object)
{
	object->size = &t_stack_size;
}
