/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 19:39:20 by jae               #+#    #+#             */
/*   Updated: 2020/03/07 19:39:20 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	int			i;
	char		*res;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!(res = malloc(sizeof(char) * (s1_len + s2_len + 1))))
		return (NULL);
	i = -1;
	while (++i < s1_len)
		res[i] = s1[i];
	while (++i - s1_len < s2_len)
		res[i] = s2[i - s1_len];
	res[i] = '\0';
	return (res);
}
