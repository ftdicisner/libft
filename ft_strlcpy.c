/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stlcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 14:54:46 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 16:04:00 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	len = 0;
	while (dstsize != 0 && len < dstsize - 1 && src[len] != 0)
	{
		dst[len] = src[len];
		len++;
	}
	if (dstsize != 0)
		dst[len] = 0;
	while (src[len] != 0)
		len++;
	return (len);
}
