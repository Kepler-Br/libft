/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:56:26 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 15:04:56 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		t_vector_size(t_vector *this)
{
	return (this->last_item_index);
}

static void			t_vector_erase(t_vector *this)
{
	this->last_item_index = 0;
	free(this->data);
	this->data = malloc(0);
	this->capacity = 0;
}

void				ft_make_t_vector2(t_vector *object)
{
	object->erase = &t_vector_erase;
	object->size = &t_vector_size;
}
