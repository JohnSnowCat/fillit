/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 22:04:51 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/07 22:07:50 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_wrdstart(char const *s, size_t count, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && *(s + i) != '\0')
		{
			k++;
			if (k == count)
			{
				j = i;
				return (j);
			}
			while (*(s + i) != c && *(s + i) != '\0')
				i++;
		}
		i++;
	}
	return (j);
}
