/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 20:17:12 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 21:44:01 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (*needle == '\0')
		return (char *)(haystack);
	while (haystack[i] != '\0' && (i < n))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while ((needle[j] != '\0') && (haystack[i] == needle[j]) && (i < n))
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (char *)(haystack + k);
			i = k;
		}
		i++;
	}
	return (NULL);
}
