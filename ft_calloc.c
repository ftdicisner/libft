/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 13:45:23 by dicisner          #+#    #+#             */
/*   Updated: 2020/03/06 19:00:37 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*dst;

	totalsize = size * count;
	if ((dst = malloc(sizeof(char) * totalsize)) == 0)
		return (0);
	ft_memset(dst, 0, totalsize);
	return (dst);
}
