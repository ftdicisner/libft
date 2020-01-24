/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:32:43 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/23 10:31:08 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t shift;

	shift = 0;
	if (n == 0)
		return (0);
	while (s1[shift] == s2[shift] && s1[shift] != 0)
	{
		if (shift < n - 1)
			shift++;
		else
			return (0);
	}
	return ((unsigned char)(s1[shift]) - (unsigned char)(s2[shift]));
}
