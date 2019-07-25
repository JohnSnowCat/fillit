/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 21:58:24 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 21:58:48 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*newlist;

	if (!lst || !f)
		return (NULL);
	temp = f(lst);
	if (!temp)
		return (NULL);
	newlist = temp;
	while (lst->next)
	{
		temp->next = f(lst->next);
		if (!temp->next)
			return (NULL);
		lst = lst->next;
		temp = temp->next;
	}
	return (newlist);
}
