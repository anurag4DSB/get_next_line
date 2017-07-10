/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:12 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 11:52:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*map;

	if (!lst || !f)
		return (NULL);
	map = f(lst);
	head = map;
	lst = lst->next;
	while (lst)
	{
		map->next = f(lst);
		map = map->next;
		lst = lst->next;
	}
	return (head);
}
