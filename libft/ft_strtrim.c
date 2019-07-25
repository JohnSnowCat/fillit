/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 19:23:10 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 19:27:55 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*dbl;
	int		i;
	int		start;
	int		len;
	int		end;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	while ((s[start] == ' ') || (s[start] == '\n') || (s[start] == '\t'))
		start++;
	len = ft_strlen(s);
	end = len - 1;
	while ((start < end) && ((s[end] == ' ') || (s[end] == '\t') ||
				(s[end] == '\n')))
		end--;
	len = end - start + 1;
	dbl = ft_strnew(len);
	if (!dbl)
		return (NULL);
	while (i < len)
		dbl[i++] = s[start++];
	return (dbl);
}
