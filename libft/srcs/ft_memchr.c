/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 12:06:06 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 16:01:04 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ss;

	ss = (const unsigned char *)s;
	while (n--)
		if (*ss++ == (unsigned char)c)
			return ((void *)(ss - 1));
	return (NULL);
}
