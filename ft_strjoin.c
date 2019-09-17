/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:08:34 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:38 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*result;
	long		len;
	long		len1;
	long		len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen((char*)s1);
	len2 = ft_strlen((char*)s2);
	len = len1 + len2;
	if (len < len1 || len < len2)
		return (NULL);
	result = (char*)malloc(len + 1 * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = '\0';
	ft_strcat((char*)result, (char*)s1);
	ft_strcat((char*)result, (char*)s2);
	return (result);
}
