/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:31:35 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 19:36:39 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*join;
	size_t	len;

	if (!(s1) || !(s2))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join = ft_strnew(len);
	p = join;
	if (!join)
		return (NULL);
	len = ft_strlen(s1);
	while (len > 0)
	{
		*join++ = *s1++;
		len--;
	}
	len = ft_strlen(s2);
	while (len > 0)
	{
		*join++ = *s2++;
		len--;
	}
	return (p);
}
