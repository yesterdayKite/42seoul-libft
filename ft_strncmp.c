/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 11:12:27 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 08:46:14 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t cnt;

	cnt = 0;
	if (n == 0)
		return (0);
	while (s1[cnt] != '\0' && s2[cnt] != '\0'
	&& s1[cnt] == s2[cnt] && cnt < n - 1)
		cnt++;
	return ((unsigned char)s1[cnt] - (unsigned char)s2[cnt]);
}
