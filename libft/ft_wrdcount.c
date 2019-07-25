/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wrdcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 19:10:57 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/07 22:08:22 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wrdcount(char const *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != '\0' && *(s + i) != c)
			count++;
		while (*(s + i) != '\0' && *(s + i) != c)
			i++;
		if (*(s + i) == '\0')
			return (count);
		i++;
	}
	return (count);
}
