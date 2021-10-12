/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:36:47 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:45:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		shift;
	char	*last;

	shift = 0;
	last = 0;
	while (s[shift] != 0)
	{
		if (s[shift] == (char)c)
			last = (char *)s + shift;
		shift++;
	}
	if (c == 0 && last == 0)
		return ((char *)s + shift);
	return (last);
}
