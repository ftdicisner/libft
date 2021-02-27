/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 13:23:00 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 12:45:58 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t shift;

	shift = 0;
	if (!dst && !src)
		return (0);
	if ((intptr_t)src < (intptr_t)dst)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (shift < len)
		{
			((char *)dst)[shift] = ((char *)src)[shift];
			shift++;
		}
	}
	return (dst);
}
