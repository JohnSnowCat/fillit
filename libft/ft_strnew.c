/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 22:30:55 by lormond-          #+#    #+#             */
/*   Updated: 2019/05/20 22:33:31 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = size + 1;
	j = 0;
	str = (char *)(malloc(sizeof(char) * i));
	if (str == NULL)
		return (NULL);
	else
	{
		while (i != 0)
		{
			str[j] = 0;
			j++;
			i--;
		}
	}
	return (str);
}
