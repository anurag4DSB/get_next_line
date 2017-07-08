/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:37:18 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 13:24:25 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*head;

	head = dest;
	while (*dest++)
		;
	dest--;
	while (*src && n--)
		*dest++ = *src++;
	*dest = '\0';
	return (head);
}
