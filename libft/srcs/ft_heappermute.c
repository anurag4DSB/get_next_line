/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_heappermute.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 00:41:05 by amittal           #+#    #+#             */
/*   Updated: 2017/07/02 16:31:03 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//ft_lstrev(inner);

void		swap(t_list *a, t_list *b)
{
	t_list	*tmp;

	tmp = a;
	a = b;
	b = tmp;
	free(tmp);
}

t_list		*ft_heappermute(void *n, size_t len)
{
	size_t 	i;
	t_list	*node;
	t_list	*outer;
	t_list	*inner;

	i = 0;
	node = (t_list *)n;
	if (len == 1)
	{
		ft_lstadd(&inner, node);
		inner = inner -> next;
	}
	else
	{
		while (len-- && i++)
		{
			ft_heappermute(node, len-1);
			(len % 2 == 1) ? swap(node, ft_lstget(node, len))
				: swap(ft_lstget(node, i), ft_lstget(node, len));
			ft_lstrev(&inner);
			ft_lstadd(&outer, inner);
			outer = outer->next;
		}
	}
	ft_lstrev(&outer);
	return(outer);
}
