/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:07:04 by nsena             #+#    #+#             */
/*   Updated: 2019/09/20 14:34:19 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_head;
	t_list	*iter;
	t_list	*copy_result;

	if (!lst || !f)
		return (NULL);
	new_head = ft_lst_elem_cpy(f(lst));
	iter = lst->next;
	while (iter != NULL)
	{
		if ((copy_result = ft_lst_elem_cpy(f(iter))))
			ft_lst_add_tail(new_head, copy_result);
		else
		{
			ft_lstdelete(new_head);
			return (NULL);
		}
		iter = iter->next;
	}
	return (new_head);
}
