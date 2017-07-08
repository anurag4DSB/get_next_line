/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/07 11:29:19 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 14:30:32 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strrchr(const char *str, char q)
{
	char	c;
	char	*last;

	last = NULL;
	while ((c = *str))
	{
		if (c == q)
			last = (char *)str;
		str++;
	}
	if (q == '\0')
		return ((char *)str);
	return ((char *)last);
}
