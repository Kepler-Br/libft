/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:09:04 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:39 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	unsigned char *loc;

	loc = NULL;
	if ((unsigned char)string[0] == 0 && (unsigned char)symbol != 0)
		return (NULL);
	while ((unsigned char)*string != 0)
	{
		if ((unsigned char)*string == (unsigned char)symbol)
			loc = (unsigned char*)string;
		string++;
	}
	if ((unsigned char)symbol == 0)
		loc = (unsigned char*)string;
	else if ((unsigned char*)string == 0 && (unsigned char)symbol != 0)
		return (NULL);
	return ((char*)loc);
}
