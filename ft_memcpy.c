/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 11:38:29 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 11:49:53 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t shift;

	shift = 0;
	while (shift < n)
	{
		((char *)dst)[shift] = ((char *)src)[shift];
		shift++;
	}
	return (dst);
}
