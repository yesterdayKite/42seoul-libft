/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 23:12:43 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 20:20:48 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_c;
	unsigned int	i;

	s_c = (unsigned char *)s;
	i = 0;
	while (i < n && s_c[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&s_c[i]);
}
