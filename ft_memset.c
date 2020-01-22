/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 10:13:33 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 11:30:58 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t byte_shift;

	byte_shift = 0;
	while (byte_shift < len)
	{
		((char*)b)[byte_shift] = c;
		byte_shift++;
	}
	return (b);
}
