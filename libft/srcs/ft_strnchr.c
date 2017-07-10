/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:06:37 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 16:06:37 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strnchr(const char *str, char q, size_t n)
{
	char	c;

	while ((c = *str) && n != 0)
	{
		if (c == q)
			return ((char *)str);
		str++;
		n--;
	}
	if (c == q)
		return ((char *)str);
	return (NULL);
}
