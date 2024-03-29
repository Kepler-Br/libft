/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:35:29 by nsena             #+#    #+#             */
/*   Updated: 2019/09/30 15:57:04 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void			t_vector_push(t_vector *this, void *data)
{
	void	*pointer;

	if (this->last_item_index == this->capacity)
	{
		this->data = ft_realloc(this->data, this->capacity *
				this->data_sizeof, 10 * this->data_sizeof);
		this->capacity += 10;
	}
	pointer = (void *)&((char *)this->data)
						[this->data_sizeof * this->last_item_index];
	ft_memcpy(pointer, data, this->data_sizeof);
	this->last_item_index++;
}

static void			t_vector_pop(t_vector *this)
{
	if (this->last_item_index == 0)
		return ;
	this->last_item_index--;
}

static void			*t_vector_at(t_vector *this, size_t index)
{
	if (index > this->last_item_index)
		return (NULL);
	return ((void *)&((char *)this->data)[this->data_sizeof * index]);
}

t_vector			*ft_make_t_vector(size_t capacity, size_t data_sizeof)
{
	t_vector	*object;

	if (!(object = (t_vector*)malloc(sizeof(t_vector))))
		return (NULL);
	if (!(object->data = malloc(capacity * data_sizeof)))
	{
		free(object);
		return (NULL);
	}
	object->capacity = capacity;
	object->data_sizeof = data_sizeof;
	object->last_item_index = 0;
	object->at = &t_vector_at;
	object->pop = &t_vector_pop;
	object->push = &t_vector_push;
	ft_make_t_vector2(object);
	return (object);
}
