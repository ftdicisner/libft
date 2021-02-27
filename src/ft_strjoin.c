/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:38:24 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/23 14:51:53 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		lensrc;
	int		lendst;

	lensrc = ft_strlen(s1);
	lendst = ft_strlen(s2);
	if ((newstr = malloc(sizeof(char) * (lensrc + lendst + 1))) == 0)
		return (0);
	ft_memcpy(newstr, s1, lensrc);
	ft_memcpy(newstr + lensrc, s2, lendst);
	newstr[lensrc + lendst] = 0;
	return (newstr);
}
