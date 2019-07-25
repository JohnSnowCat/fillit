/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:50 by lormond-          #+#    #+#             */
/*   Updated: 2019/04/11 18:03:01 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*buff;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	buff = (char *)malloc(sizeof(char) * (i + 1));
	if (buff != NULL)
		while (i >= 0)
		{
			buff[i] = s1[i];
			i--;
		}
	return (buff);
}
