/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:08:23 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:38 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*new_str;
	char	*p;
	int		len;

	len = ft_strlen((char *)src);
	new_str = (char*)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	p = new_str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (new_str);
}
