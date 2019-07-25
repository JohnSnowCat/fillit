/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 20:01:23 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 20:36:25 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (*needle == '\0')
		return (char *)(haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			k = i;
			while ((needle[j] != '\0') && (haystack[i] == needle[j]))
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
