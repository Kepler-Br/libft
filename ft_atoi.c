/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsena <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:06:01 by nsena             #+#    #+#             */
/*   Updated: 2019/09/14 19:10:38 by nsena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		parse_ws(const char *str)
{
	int index;

	index = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\f' ||
			str[index] == '\r' || str[index] == '\v' || str[index] == ' ')
		index++;
	if (str[index] == '-' || str[index] == '+')
		index++;
	return (index);
}

static int		handle_owerflow(const char *str, int neg, int index)
{
	if (str[index + 1] == '7' && neg == -1)
		return (1);
	if (str[index + 1] == '6' && neg == 1)
		return (-2);
	return (neg == 1) ? -1 : 0;
}

int				ft_atoi(const char *str)
{
	long					result;
	long					index;
	long					is_negative;

	result = 0;
	is_negative = 1;
	index = parse_ws(str);
	if (str[index - 1] == '-')
		is_negative = -1;
	while (str[index] != '\0')
	{
		if (str[index] < '0' || str[index] > '9')
			break ;
		result += str[index] - '0';
		if (str[index + 1] == '\0' || str[index + 1] < '0' ||
			str[index + 1] > '9')
			break ;
		result *= 10;
		if (result > result * 10)
		{
			return (handle_owerflow(str, is_negative, index));
		}
		index++;
	}
	return ((int)(result * is_negative));
}
