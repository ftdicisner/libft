/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:08:49 by dicisner          #+#    #+#             */
/*   Updated: 2020/01/22 18:28:13 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = 0;
	if (*needle == 0)
		return (haystack);
	while (haystack[i] !== 0)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
			j++;
		if (needle[j] == 0)
			return (haystack + i);
		i++;
	}
	return (0);
}
