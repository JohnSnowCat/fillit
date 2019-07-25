/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 20:03:34 by lormond-          #+#    #+#             */
/*   Updated: 2019/04/11 17:52:38 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(src);
	ft_bzero(dst, j + 1);
	{
		while (src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (dst);
}
