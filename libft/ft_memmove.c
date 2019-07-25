/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 18:33:35 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 19:45:08 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*pd;
	unsigned char	*ps;

	if (!(dest) && !(src))
		return (NULL);
	pd = (unsigned char *)dest;
	ps = (unsigned char *)src;
	if (pd <= ps || pd >= (ps + len))
	{
		while (len--)
			*pd++ = *ps++;
	}
	else
	{
		pd += len - 1;
		ps += len - 1;
		while (len--)
			*pd-- = *ps--;
	}
	return (dest);
}
