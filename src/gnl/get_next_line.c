/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <dicisner@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:45:26 by dicisner          #+#    #+#             */
/*   Updated: 2021/09/29 23:29:20 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*check_if_newline(char *s)
{
	int		len;
	char	*line;
	int		i;

	len = 0;
	i = 0;
	if (s == 0)
		return (0);
	while (s[len] != '\n')
	{
		if (s[len] == 0)
			return (0);
		len++;
	}
	line = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		line[i] = s[i];
		i++;
	}
	line[i] = 0;
	return (line);
}

int	set_remain(char **s, int fd, char *buf)
{
	int		len;
	char	*news;

	len = 0;
	free(buf);
	while (s[fd][len] != '\n')
		len++;
	news = ft_strdup_(s[fd] + len + 1);
	free(s[fd]);
	s[fd] = news;
	return (1);
}

int	return_if_last_line(char **str, char **line, int n, t_gnl gnl)
{
	if (n < 0)
		return (-1);
	*line = check_if_newline(str[gnl.fd]);
	if (*line != 0)
		return (set_remain(str, gnl.fd, gnl.buf));
	free(gnl.buf);
	if (str[gnl.fd] == 0 || str[gnl.fd][0] == 0)
	{
		*line = ft_strdup_("");
		free(str[gnl.fd]);
		return (0);
	}
	else
	{
		*line = ft_strdup_(str[gnl.fd]);
		free(str[gnl.fd]);
		str[gnl.fd] = 0;
		return (0);
	}
}

int	get_next_line(int fd, char **line)
{
	static char	*s[FD_SIZE];
	char		*tmp;
	char		*buf;
	int			n;

	if (fd < 0 || fd >= FD_SIZE || line == 0 || BUFFER_SIZE < 1)
		return (-1);
	buf = malloc(sizeof(char ) * (BUFFER_SIZE + 1));
	n = read(fd, buf, BUFFER_SIZE);
	while (n > 0)
	{
		buf[n] = 0;
		if (s[fd] != 0)
			tmp = strjoin(s[fd], buf);
		else
			tmp = ft_strdup_(buf);
		free(s[fd]);
		s[fd] = ft_strdup_(tmp);
		free(tmp);
		*line = check_if_newline(s[fd]);
		if (*line != 0)
			return (set_remain(s, fd, buf));
		n = read(fd, buf, BUFFER_SIZE);
	}
	return (return_if_last_line(s, line, n, new_gnl(fd, buf)));
}
