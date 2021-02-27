/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:44:03 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 22:38:22 by dicisner         ###   ########.fr       */
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

static	int		isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			shift;
	int			isneg;
	long int	ntmp;

	ntmp = n;
	isneg = isnegative(ntmp);
	len = count_dig(ntmp) + isneg;
	if ((res = malloc((len + 1) * sizeof(char))) == 0)
		return (0);
	res[len] = 0;
	shift = 0;
	if (n == 0)
		res[0] = '0';
	ntmp = isneg ? ntmp * (-1) : ntmp;
	while (ntmp)
	{
		res[len - shift - 1] = (ntmp % 10) + '0';
		shift++;
		ntmp = ntmp / 10;
	}
	if (isneg)
		res[0] = '-';
	return (res);
}
