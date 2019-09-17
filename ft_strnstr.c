/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:09:01 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:39 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int		ft_isnsub(const char *str,
		const char *to_find, size_t n, size_t iter)
{
	while (*str && *to_find && iter < n)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
		iter++;
	}
	return (*to_find == '\0');
}

char			*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t iter;

	if (!*to_find)
		return ((char*)str);
	iter = 0;
	while (*str != '\0' && iter < n)
	{
		if ((*str == *to_find) && ft_isnsub(str, to_find, n, iter))
			return ((char*)str);
		str++;
		iter++;
	}
	return (0);
}
