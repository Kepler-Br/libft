/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:09:11 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:39 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_issub(const char *str, const char *to_find)
{
	while (*str && *to_find)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

char			*ft_strstr(const char *str, const char *to_find)
{
	if (!*to_find)
		return ((char*)str);
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_issub(str, to_find))
			return ((char*)str);
		str++;
	}
	return (0);
}
