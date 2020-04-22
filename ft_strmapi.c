/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 12:39:03 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 10:55:24 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		idx;

	if (!s || !f)
		return (NULL);
	if (!(p = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	idx = -1;
	while (s[++idx])
		p[idx] = f(idx, s[idx]);
	p[idx] = '\0';
	return (p);
}
