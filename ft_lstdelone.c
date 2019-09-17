/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:06:58 by nsena             #+#    #+#             */
/*   Updated: 2019/09/16 14:20:40 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (del && alst && *alst)
	{
		del((*alst)->content, sizeof(alst));
		free(*(alst));
		(*alst)->content = NULL;
		*(alst) = NULL;
	}
}
