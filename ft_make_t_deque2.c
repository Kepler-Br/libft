/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_t_deque2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 15:07:45 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:11:22 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			t_deque_pop(t_deque *this)
{
	t_deque_item	*pointer;
	t_deque_item	*prev_pointer;

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

static void			t_deque_push(t_deque *this, void *data, size_t data_size)
{
	t_deque_item	*item;
	t_deque_item	*pointer;

	if (!data)
		return ;
	item = (t_deque_item *)malloc(sizeof(t_deque_item));
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

static t_deque_item	*t_deque_top(t_deque *this)
{
	t_deque_item	*pointer;

	if (!this->bottom)
		return (NULL);
	pointer = this->bottom;
	while (pointer->next)
		pointer = pointer->next;
	return (pointer);
}

void				ft_make_t_deque2(t_deque *object)
{
	object->push = &t_deque_push;
	object->pop = &t_deque_pop;
	object->top = &t_deque_top;
}
