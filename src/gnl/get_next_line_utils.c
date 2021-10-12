/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <dicisner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:26:12 by dicisner          #+#    #+#             */
/*   Updated: 2021/09/14 18:35:00 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup_(char *s)
{
	int		len;
	char	*new;
	int		i;

	i = 0;
	len = 0;
	while (s[len] != 0)
		len++;
	new = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

char	*strjoin(char *s1, char *s2)
{
	int		len1;
	int		len2;
	char	*res;
	int		i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc((len1 + len2 + 1) * sizeof(char));
	i = 0;
	while (*s1)
	{
		res[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		res[i] = *s2;
		s2++;
		i++;
	}
	res[i] = 0;
	return (res);
}

t_gnl	new_gnl(int fd, char *buf)
{
	t_gnl	gnl;

	gnl.fd = fd;
	gnl.buf = buf;
	return (gnl);
}
