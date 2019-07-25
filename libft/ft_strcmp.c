/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:02:44 by lormond-          #+#    #+#             */
/*   Updated: 2019/05/16 20:11:09 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*a;
	unsigned char	*b;
	int				i;

	i = 0;
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] == b[i])
			i++;
		else
			return (a[i] - b[i]);
	}
	if (a[i] == b[i])
		return (0);
	else
		return (a[i] - b[i]);
}
