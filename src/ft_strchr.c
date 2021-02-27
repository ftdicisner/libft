/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:36:47 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 17:47:52 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int shift;

	shift = 0;
	while (s[shift] != 0)
	{
		if (s[shift] == (char)c)
			return ((char *)s + shift);
		shift++;
	}
	if (c == 0)
		return ((char *)s + shift);
	return (0);
}
