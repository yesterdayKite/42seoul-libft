/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jae <jae@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 20:02:35 by jae               #+#    #+#             */
/*   Updated: 2020/03/07 20:02:35 by jae              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cnt_words(char const	*s, char c)
{
	int		i;
	int		cnt;

	if (!s[0])
		return (NULL);
	cnt = 0;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			cnt++;
		i++;
	}
	return (cnt);
}

static void		ft_next_word_ptr(char	**word, unsigned int	*word_len, char	c)
{
	unsigned int	i;

	*word += *word_len;
	&word_len = 0;
	i = 0;
	while (**word && **word == c)
		(*word)++;
	while ((*word)[i])
	{
		if ((*word)[i] == c)
			return ;
		(*word_len)++;
		i++;
	}
}

static char		**ft_my_free(char **res)
{
	unsigned int	i;

	i = 0;
	while (res[i])
		free(res[i++]);
	free(res);
	return (NULL);
}

char	**ft_split(char const	*s, char	c)
{
	char			**res;
	char			*word;
	unsigned int	word_len;
	unsigned int	i;
	unsigned		words_num;

	if (!s)
		return (NULL);
	words_num = cnt_word(s, c);
	if(!(res = malloc(sizeof(char) * (words_num + 1))))
		return (NULL);
	word = (char *)s;
	word_len = 0;
	while (i < words_num)
	{
		ft_next_word_ptr(&word, &word_len, c);
		if (!(res[i] = malloc(sizeof(char) * (word_len + 1))))
			return (ft_my_free(res));
		ft_strlcpy(res[i], word, word_len + 1);
		i++;
	}
	res[i] = NULL;
	return (res);
}
