/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 10:32:20 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/23 11:03:41 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int nbr;
	int i;
	int isneg;

	nbr = 0;
	i = 0;
	isneg = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isneg = 1;
		i++;
	}
	while (str[i] == 0)
		i++;
	while (str[i] != 0 && ft_isdigit(str[i]))
	{
		nbr = str[i] - '0' + nbr * 10;
		i++;
	}
	return (nbr * (isneg ? -1 : 1));
}
