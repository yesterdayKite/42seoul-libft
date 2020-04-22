/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 16:06:02 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 08:47:04 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_space(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else
		return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		cnt;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	cnt = ft_strlen(s1);
	while (cnt && ft_strchr(set, s1[cnt]))
		cnt--;
	res = ft_substr((char*)s1, 0, cnt + 1);
	return (res);
}
