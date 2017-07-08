/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstevery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:50:01 by amittal           #+#    #+#             */
/*   Updated: 2017/06/26 01:54:29 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

int		ft_lstevery(t_list *lst, int (*f)(t_list *elem))
{
	while (lst)
	{
		if (!f(lst))
			return (0);
		lst = lst->next;
	}
	return (1);
}
