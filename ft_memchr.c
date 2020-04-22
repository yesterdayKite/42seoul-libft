/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 23:12:43 by jae               #+#    #+#             */
/*   Updated: 2020/04/21 22:18:48 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	int				i;

	i = 0;
	s_ptr = (unsigned char*)s;
	while (n-- > 0)
	{
		if (s_ptr[i] == (unsigned char)c)
			return (s_ptr[i]);
		else
			i++;
	}
	return (0);
}
