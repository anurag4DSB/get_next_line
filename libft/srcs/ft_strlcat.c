/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:42:54 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;
	size_t	left_to_copy;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dst_len = i;
	src_len = ft_strlen(src);
	left_to_copy = size - dst_len;
	if (left_to_copy == 0)
		return (dst_len + src_len);
	i = 0;
	while (src[i] && left_to_copy-- > 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
