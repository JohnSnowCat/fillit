/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:05:16 by lormond-          #+#    #+#             */
/*   Updated: 2019/04/11 17:49:13 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		b;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	i = 0;
	b = (char)c;
	while (i < n)
	{
		if (s[i] == b)
		{
			d[i] = s[i];
			return (d + i + 1);
		}
		else
		{
			d[i] = s[i];
			i++;
		}
	}
	return (NULL);
}
