/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:39:58 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 14:53:15 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t shift;

	shift = 0;
	while (shift < n)
	{
		if (((unsigned char *)s1)[shift] != ((unsigned char *)s2)[shift])
			return (((unsigned char *)s1)[shift] -
					((unsigned char *)s2)[shift]);
			shift++;
	}
	return (0);
}
