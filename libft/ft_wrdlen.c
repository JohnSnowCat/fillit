/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 21:58:47 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/07 22:04:23 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wrdlen(char const *s, size_t count, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	k = 0;
	i = 0;
	j = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != '\0' && *(s + i) != c)
		{
			k++;
			if (k == count)
			{
				while (*(s + i + j) != '\0' && *(s + i + j) != c)
					j++;
				return (j);
			}
			while (*(s + i) != '\0' && *(s + i) != c)
				i++;
		}
		i++;
	}
	return (j);
}
