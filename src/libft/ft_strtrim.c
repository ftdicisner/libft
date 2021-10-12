/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:32:20 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:45:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	to_trim(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*newstr;
	size_t		i;
	size_t		len;
	size_t		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (to_trim(s1[i], set))
		i++;
	while (to_trim(s1[len - 1 - j], set))
		j++;
	if (i > len - 1 - j)
		newstr = ft_calloc(1, 1);
	else
		newstr = ft_substr(s1, i, len - j - i);
	return (newstr);
}
