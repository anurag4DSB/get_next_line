/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordnchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:16:39 by amittal           #+#    #+#             */
/*   Updated: 2017/07/03 01:07:30 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_wordnchr(const char *str, char q, char d, size_t n)
{
	char	c;

	if (n == 0)
		return (NULL);
	while (((c = *str)) && c != d && n != 0)
	{
		if (c == q)
			return ((char *)str);
		str++;
		n--;
	}
	if (c == q && (q == d || q == '\0'))
		return ((char *)str);
	return (NULL);
}
