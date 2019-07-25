/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 21:46:23 by lormond-          #+#    #+#             */
/*   Updated: 2019/06/05 21:51:08 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*temp;

	if (!*del || !alst || !*alst)
		return ;
	while ((*alst) != NULL)
	{
		temp = ((*alst)->next);
		del((*alst)->content, (*alst)->content_size);
		(*alst)->content = NULL;
		free(*alst);
		(*alst) = NULL;
		(*alst) = temp;
	}
}
