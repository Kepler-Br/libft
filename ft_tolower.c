/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:09:20 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:09:39 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int c)
{
	if (c >= (int)'A' && c <= (int)'Z')
		return (c + 32);
	return (c);
}
