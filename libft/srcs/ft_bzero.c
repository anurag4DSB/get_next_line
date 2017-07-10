/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:24:39 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bytes;

	bytes = (unsigned char *)s;
	while (n--)
		*bytes++ = 0;
}
