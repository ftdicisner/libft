/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:39:33 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/24 13:14:57 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	s1len;
	char	*scopy;

	s1len = ft_strlen(s1);
	if ((scopy = malloc((sizeof(char) * s1len) + 1)) == 0)
		return (0);
	ft_memcpy(scopy, s1, s1len + 1);
	return (scopy);
}
