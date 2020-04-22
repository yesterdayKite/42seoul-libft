/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 15:58:30 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 11:57:22 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s_ptr;
	int		i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	if (!(s_ptr = (char *)malloc(sizeof(char) * (len) + 1)))
		return (NULL);
	i = 0;
	while (len-- && s[start])
		s_ptr[i++] = s[start++];
	s_ptr[i] = '\0';
	return (s_ptr);
}
