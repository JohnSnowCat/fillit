/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 20:15:17 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 19:05:44 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*nl;

	nl = (t_list *)malloc(sizeof(t_list));
	if (nl == NULL)
		return (NULL);
	if (content == NULL)
	{
		nl->content = NULL;
		nl->content_size = 0;
		nl->next = NULL;
		return (nl);
	}
	nl->content = (void *)ft_memalloc(sizeof(void) * (content_size));
	if (nl->content == NULL)
		return (NULL);
	ft_memcpy(nl->content, content, content_size);
	nl->content_size = content_size;
	nl->next = NULL;
	return (nl);
}
