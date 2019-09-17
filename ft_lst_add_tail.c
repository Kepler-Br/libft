/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_tail.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:06:38 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:38 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_add_tail(t_list *e1, t_list *e2)
{
	t_list *iter;

	if (!e2 || !e1)
		return ;
	else
	{
		iter = e1;
		while (iter->next != NULL)
		{
			iter = iter->next;
		}
		iter->next = e2;
	}
}
