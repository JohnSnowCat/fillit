/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 22:22:50 by lormond-          #+#    #+#             */
/*   Updated: 2019/05/20 22:28:47 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int						i;
	int						neg;
	unsigned long long int	res;
	unsigned long long int	temp;

	i = 0;
	neg = 1;
	res = 0;
	while ((nptr[i] != '\0') && ((nptr[i] == '\n') || (nptr[i] == '\f') ||
				(nptr[i] == '\v') || (nptr[i] == '\r') || (nptr[i] == '\t') ||
				(nptr[i] == ' ')))
		i++;
	if (nptr[i] == '-')
		neg = -1;
	if ((nptr[i] == '-') || (nptr[i] == '+'))
		i++;
	while ((nptr[i] != '\0') && (nptr[i] >= '0') && (nptr[i] <= '9'))
	{
		temp = res;
		res = (res * 10) + (unsigned long long int)(nptr[i] - 48);
		if (temp > res)
			return (((neg == 1) ? (-1) : (0)));
		i++;
	}
	return (res * neg);
}
