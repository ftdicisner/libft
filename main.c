/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:31:30 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 11:17:22 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int		main()
{
	{
		printf("\n**** ft_strlen ****\n");	

		{
			char *c = "Hello world";
			printf("Should be same length for strlen and ft_strlen: %s", strlen(c) == ft_strlen(c) ? "OK" : "WRONG");
			printf("\n");
		}
		{
			char *c = "d";
			printf("Should be same length for strlen and ft_strlen: %s", strlen(c) == ft_strlen(c) ? "OK" : "WRONG");
			printf("\n");
		}
		{
			char *c = "";
			printf("Should be same length for strlen and ft_strlen: %s", strlen(c) == ft_strlen(c) ? "OK" : "WRONG");
			printf("\n");
		}
	}
	{
		printf("\n**** ft_memset ****\n");	

		{
			char c1[] = "Hello world";
			char c2[] = "Hello world";
			printf("Should be same length for memset and ft_memset: %s", strcmp(ft_memset(c1, 'x', 5),memset(c2, 'x', 5)) == 0 ? "OK" : "WRONG");
			printf("\n");
		}
	}

	return (0);
}
