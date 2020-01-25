/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 10:58:56 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/25 11:25:49 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *tmp;
	t_list *tmpnext;

	tmp = *lst;
	while (tmp)
	{
		tmpnext = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = tmpnext;
	}
	*lst = 0;
}
