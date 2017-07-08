/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 11:32:55 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 11:32:55 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

#include "libft.h"

t_point	*ft_ptnew(int x, int y)
{
	t_point	*new;

	if ((new = malloc(sizeof(t_point))) == NULL)
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
