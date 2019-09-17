/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:28:37 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:12:58 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void			t_stack_push(t_stack *this, void *data, size_t data_size)
{
	t_stack_item	*item;
	t_stack_item	*pointer;

	if (!data)
		return ;
	item = (t_stack_item *)malloc(sizeof(t_stack_item));
	if (!item)
		return ;
	item->data = ft_memdup(data, data_size);
	item->data_size = data_size;
	item->next = NULL;
	if (!this->bottom)
		this->bottom = item;
	else
	{
		pointer = this->bottom;
		while (pointer->next)
			pointer = pointer->next;
		pointer->next = item;
	}
}

static void			t_stack_erase(t_stack *this)
{
	while (this->bottom)
		this->pop(this);
}

static void			t_stack_pop(t_stack *this)
{
	t_stack_item	*pointer;
	t_stack_item	*prev_pointer;

	if (!this->bottom)
		return ;
	if (!this->bottom->next)
	{
		free(this->bottom->data);
		free(this->bottom);
		this->bottom = NULL;
		return ;
	}
	pointer = this->bottom;
	while (pointer->next)
	{
		prev_pointer = pointer;
		pointer = pointer->next;
	}
	free(pointer->data);
	free(pointer);
	prev_pointer->next = NULL;
}

static t_stack_item	*t_stack_top(t_stack *this)
{
	t_stack_item	*pointer;

	if (!this->bottom)
		return (NULL);
	pointer = this->bottom;
	while (pointer->next)
		pointer = pointer->next;
	return (pointer);
}

t_stack				*ft_make_t_stack(void)
{
	t_stack *object;

	if (!(object = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	object->push = &t_stack_push;
	object->pop = &t_stack_pop;
	object->top = &t_stack_top;
	object->erase = &t_stack_erase;
	object->bottom = NULL;
	ft_make_t_stack2(object);
	return (object);
}
