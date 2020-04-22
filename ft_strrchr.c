/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 14:20:55 by jae               #+#    #+#             */
/*   Updated: 2020/03/01 20:49:55 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int i;
	char	*cnt;

	cnt = 0;
	i = -1;
	if (cnt)
		return (cnt);
	if (c == '\0')
		return ((char*)s);
	while (s[++i])
	{
		if (s[i] == c)
			cnt = (char*)s;
		++s;
	}
	return (0);
}
