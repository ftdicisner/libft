/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 16:17:51 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:43:58 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# define FD_SIZE 4096
# define BUFFER_SIZE 32
# include "../libft.h"

typedef struct s_gnl
{
	int		fd;
	char	*buf;
}	t_gnl;

char	*strjoin(char *s0, char *s2);
char	*ft_strdup_(char *s);
t_gnl	new_gnl(int fd, char *buf);

#endif
