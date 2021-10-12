/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 14:44:03 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:45:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static	size_t	count_dig(int n)
{
	size_t	dig;

	dig = 1;
	while (n / 10)
	{
		n = n / 10;
		dig++;
	}
	return (dig);
}

static	int	isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

void	add_neg(char *res, int isneg)
{
	if (isneg)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	char		*res;
	int			len;
	int			shift;
	int			isneg;
	long int	ntmp;

	ntmp = n;
	isneg = isnegative(ntmp);
	len = count_dig(ntmp) + isneg;
	res = malloc((len + 1) * sizeof(char));
	if (res == 0)
		return (0);
	res[len] = 0;
	shift = 0;
	if (n == 0)
		res[0] = '0';
	ntmp = ternary(isneg, ntmp * (-1), ntmp);
	while (ntmp)
	{
		res[len - shift - 1] = (ntmp % 10) + '0';
		shift++;
		ntmp = ntmp / 10;
	}
	add_neg(res, isneg);
	return (res);
}
