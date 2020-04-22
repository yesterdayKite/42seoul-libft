/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 23:12:43 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 12:14:16 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tar;
	size_t			i;

	tar = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (tar[i] == (unsigned char)c)
			return ((void *)&tar[i]);
			i++;
	}
	return (NULL);
}
