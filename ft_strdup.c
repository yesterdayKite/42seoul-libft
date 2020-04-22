/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 12:51:05 by jae               #+#    #+#             */
/*   Updated: 2020/04/22 08:33:49 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char *cpy;
	cpy = NULL;
	if (!(cpy = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
		return (NULL);
	ft_strcpy(cpy, src);
	return (cpy);
}
