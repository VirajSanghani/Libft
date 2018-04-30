/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsanghan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 14:55:49 by vsanghan          #+#    #+#             */
/*   Updated: 2018/04/30 14:57:22 by vsanghan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*curr;
	t_list	*tail;
	t_list	*head;

	head = NULL;
	while (lst)
	{
		tail = malloc(sizeof(size_t));
		if (!tail)
			return (NULL);
		tail = f(lst);
		if (!head)
		{
			head = tail;
			curr = tail;
		}
		else
		{
			curr->next = tail;
			curr = curr->next;
		}
		lst = lst->next;
	}
	return (head);
}
