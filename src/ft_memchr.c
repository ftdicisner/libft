/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:18:10 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 14:31:47 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t shift;

	shift = 0;
	while (shift < n)
	{
		if (((char *)s)[shift] == (char)c)
			return (void*)(s + shift);
		shift++;
	}
	return (0);
}
