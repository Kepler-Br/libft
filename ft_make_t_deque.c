/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:33:19 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:11:43 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void			t_deque_push_bottom(t_deque *this, void *data,
										size_t data_size)
{
	t_deque_item	*item;

	if (!data)
		return ;
	item = (t_deque_item *)malloc(sizeof(t_deque_item));
	if (!item)
		return ;
	item->data = ft_memdup(data, data_size);
	item->data_size = data_size;
	item->next = NULL;
	if (!this->bottom)
		this->bottom = item;
	else
	{
		item->next = this->bottom;
		this->bottom = item;
	}
}

static void			t_deque_erase(t_deque *this)
{
	while (this->bottom)
		this->pop_bottom(this);
}

static void			t_deque_pop_bottom(t_deque *this)
{
	t_deque_item	*pointer;

	if (!this->bottom)
		return ;
	if (!this->bottom->next)
	{
		free(this->bottom->data);
		free(this->bottom);
		this->bottom = NULL;
		return ;
	}
	pointer = this->bottom->next;
	free(this->bottom->data);
	free(this->bottom);
	this->bottom = pointer;
}

static size_t		t_deque_size(t_deque *this)
{
	t_deque_item	*pointer;
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

t_deque				*ft_make_t_deque(void)
{
	t_deque	*object;

	if (!(object = (t_deque *)malloc(sizeof(t_deque))))
		return (NULL);
	object->size = &t_deque_size;
	object->erase = &t_deque_erase;
	object->pop_bottom = &t_deque_pop_bottom;
	object->push_bottom = &t_deque_push_bottom;
	object->bottom = NULL;
	ft_make_t_deque2(object);
	return (object);
}
