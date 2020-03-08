/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:46:52 by jae               #+#    #+#             */
/*   Updated: 2020/03/06 12:46:53 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t	count, size_t	size)
{
	unsigned char	*p;

	if (!(p = (unsigned char *)malloc(sizeof(size) * count)))
		return (NULL);
	ft_memset(p, 0, count);
	return ((void *)p);
}
