/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 20:49:18 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 20:03:02 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	overflow(long long res)
{
	if (res > INT_MAX)
		return (0);
	if (res < INT_MIN)
		return (0);
	return (res);
}

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
		return (1);
	if (c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	long long	res;
	int			is_minus;

	res = 0;
	is_minus = 1;
	while (ft_isspace(*str) || *str == '-' || *str == '+')
	{
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				is_minus = -is_minus;
			str++;
			break ;
		}
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = (10 * res) + *str - 48;
		str++;
	}
	return (overflow(res * is_minus));
}
