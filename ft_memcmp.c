/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:36:30 by jae               #+#    #+#             */
/*   Updated: 2020/04/21 22:20:08 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	count;
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;

	count = 0;
	s1_ptr = (unsigned char*)s1;
	s2_ptr = (unsigned char*)s2;
	while (n-- > 0)
	{
		if (s1_ptr[count] != s2_ptr[count])
			return ((s1_ptr[count] - s2_ptr[count]));
		count++;
	}
	return (0);
}
