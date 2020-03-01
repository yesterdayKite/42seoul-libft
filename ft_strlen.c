/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 14:59:49 by jae               #+#    #+#             */
/*   Updated: 2020/02/29 14:59:49 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	char	*ptr;
	size_t	cnt;

	cnt = 0;
	while (*ptr++ != '\0')
		cnt++;
	return (cnt);
}