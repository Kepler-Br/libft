/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_elem_cpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:06:41 by nsena             #+#    #+#             */
/*   Updated: 2019/09/20 14:32:55 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_elem_cpy(t_list *elem)
{
	t_list *new;

	if (!elem)
		return (NULL);
	new = ft_lstnew(elem->content, elem->content_size);
	return (new);
}
