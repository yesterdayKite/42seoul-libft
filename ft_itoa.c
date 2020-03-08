/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:17:38 by jae               #+#    #+#             */
/*   Updated: 2020/03/08 12:17:38 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int	n)
{
	size_t	len;
	long	nbr;
	char	*res;

	nbr = n;
	len = (n > 0) ? 0 : 1;
	nbr = (nbr > 0) ? nbr : -nbr;
	while (nbr)
		nbr = len++ ? nbr / 10 : nbr / 10;
	if(!(res = (char *)malloc(sizoef(res) * len + 1)))
		return (NULL);
	*(res + len--) = '\0';
	while (n > 0)
	{
		*(res + len--) = n % 10 + '0';
		n /= 10;
	}
	if (len == 0 && res[1] == '\0')
		*(res + len) = '\0';
	if (len == 0 && res[1] != '\0')
		*(res + len) = '-';
	return (res);
}
