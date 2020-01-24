/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:44:03 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 14:51:12 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	count_dig(int n)
{
	size_t dig;

	dig = 1;
	while (n / 10)
	{	
		n = n / 10;
		dig++;
	}
	return (dig);
}

static	int		isneg(int n)
{
	if (n < 0) 
		return (1);
	return (0);
}

char	*ft_itoa(int n)
{
		
}
