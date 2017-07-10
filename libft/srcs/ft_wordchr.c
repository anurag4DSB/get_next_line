/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:21:20 by amittal           #+#    #+#             */
/*   Updated: 2017/07/03 01:15:07 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_wordchr(const char *str, char q, char d)
{
	char	c;

	while (((c = *str)) && c != d)
	{
		if (c == q)
			return ((char *)str);
		str++;
	}
	if (c == q && (q == d || q == '\0'))
		return ((char *)str);
	return (NULL);
}
