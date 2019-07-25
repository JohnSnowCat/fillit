/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:50:22 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 18:53:17 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_countdigit(long long num)
{
	size_t	i;

	i = 1;
	if (num < 0)
		num *= -1;
	while (num /= 10)
		i++;
	return (i);
}