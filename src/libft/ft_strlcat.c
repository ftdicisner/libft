/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:04:57 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:45:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	shift;

	dst_len = ft_strlen(dst);
	shift = dst_len;
	src_len = 0;
	while (shift < dstsize - 1 && dstsize != 0 && src[src_len] != 0)
	{
		dst[shift] = src[src_len];
		shift++;
		src_len++;
	}
	if (dstsize != 0)
		dst[shift] = 0;
	if (dst_len > dstsize)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + dst_len);
}
