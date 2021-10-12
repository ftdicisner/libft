/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:50:23 by dicisner          #+#    #+#             */
/*   Updated: 2021/10/11 20:50:23 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/libft.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "stdio.h"

int	main(void)
{
	int		fd;
	char	*input;	

	fd = open("test/test", O_RDONLY);
	while (get_next_line(fd, &input) != 0)
	{
		printf("%s\n", input);
	}
	return (0);
}
