/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:08:25 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 08:41:10 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char	*restrict dst
, const char *restrict src, size_t dstsize)
{
	size_t	dst_cnt;
	size_t	src_cnt;
	size_t	i;

	src_cnt = 0;
	dst_cnt = 0;
	i = 0;
	while (src[src_cnt] != '\0')
		src_cnt++;
	while (dst[dst_cnt] != '\0')
		dst_cnt++;
	if (dstsize <= dst_cnt)
		src_cnt += dstsize;
	else
		src_cnt += dst_cnt;
	while (src[i] != '\0' && i + 1 < dstsize)
		dst[dst_cnt++] = src[i++];
	dst[dst_cnt] = '\0';
	return (src_cnt);
}
