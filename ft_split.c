/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 13:30:32 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 14:41:45 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	int		isw;

	i = 0;
	count = 0;
	isw = 1;
	while (s[i])
	{
		if (s[i] != c && isw == 1)
		{
			count++;
			isw = 0;
		}
		if (s[i] == c && isw == 0)
			isw = 1;
		i++;
	}
	return (count);
}

static size_t	strlen_mod(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

static char		**asigntoarr(char **strarr, char const *s, char c)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	tmpsize;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if ((tmpsize = strlen_mod(s + i, c)) != 0)
		{
			if ((str = malloc((tmpsize + 1) * sizeof(char))) == 0)
				return (0);
			ft_memcpy(str, s + i, tmpsize);
			str[tmpsize] = 0;
			strarr[j++] = str;
			i = i + tmpsize;
		}
	}
	strarr[j] = 0;
	return (strarr);
}

char			**ft_split(char const *s, char c)
{
	char	**strarr;

	if ((strarr = malloc((count_words(s, c) + 1) * sizeof(char *))) == 0)
		return (0);
	return (asigntoarr(strarr, s, c));
}
