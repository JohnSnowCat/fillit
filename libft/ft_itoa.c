/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:54:35 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 18:58:47 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*p;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		neg = -1;
		n *= neg;
	}
	i = ft_countdigit(n);
	if (!(p = ft_memalloc(i + 1)))
		return (NULL);
	i--;
	while (i >= 0)
	{
		p[i--] = n % 10 + 48;
		n = n / 10;
	}
	return ((neg < 0) ? (ft_strjoin("-", p)) : p);
}
