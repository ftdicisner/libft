/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:14:13 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/23 17:02:18 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		actuallen;
	int		lensrc;

	lensrc = ft_strlen(s);
	actuallen = lensrc - start > len ? len : lensrc - start;
	if ((substr = malloc(sizeof(char) * (actuallen + 1))) == 0)
		return (0);
	ft_strlcpy(substr, s + start, actuallen + 1);
	return (substr);
}
