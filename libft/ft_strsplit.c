/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 22:08:31 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/07 22:13:08 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				**ft_strsplit(char const *s, char c)
{
	char			**array;
	size_t			i;
	size_t			len;
	size_t			wcount;

	i = 0;
	len = 0;
	if (!s)
		return (NULL);
	wcount = ft_wrdcount(s, c);
	if (!(array = (char **)malloc(sizeof(char *) * (wcount + 1))))
		return (NULL);
	while (i < wcount)
	{
		len = ft_wrdlen(s, i + 1, c);
		if (!(array[i] = (char *)malloc(sizeof(char) * (len + 1))))
			return (ft_arrclr(array, i));
		array[i] = ft_strsub(s, ft_wrdstart(s, (i + 1), c), len);
		i++;
	}
	array[i] = NULL;
	return (array);
}
