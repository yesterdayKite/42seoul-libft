/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:06:34 by jae               #+#    #+#             */
/*   Updated: 2020/04/21 22:17:49 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
int c, size_t n)
{
	size_t			i;
	unsigned char	*d_ptr;
	unsigned char	*s_ptr;

	i = -1;
	d_ptr = (unsigned char*)dst;
	s_ptr = (unsigned char*)src;
	while (++i < n)
	{
		d_ptr[i] = s_ptr[i];
		if (d_ptr[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
	}
	return (NULL);
}
