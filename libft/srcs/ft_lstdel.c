/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:08 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:27:26 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link;

	if (!alst || !del)
		return ;
	link = *alst;
	while (link)
	{
		del(link->content, link->content_size);
		link = (**alst).next;
		free(*alst);
		*alst = link;
	}
}
