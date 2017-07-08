/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/04/11 22:21:12 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if ((m = malloc(size)))
		bzero(m, size);
	return (m);
}
