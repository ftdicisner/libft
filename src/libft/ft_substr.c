/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:14:13 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:45:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		actuallen;
	int		lensrc;

	lensrc = ft_strlen(s);
	actuallen = ternary(lensrc - start > len, len, lensrc - start);
	substr = malloc(sizeof(char) * (actuallen + 1));
	if (substr == 0)
		return (0);
	ft_strlcpy(substr, s + start, actuallen + 1);
	return (substr);
}
