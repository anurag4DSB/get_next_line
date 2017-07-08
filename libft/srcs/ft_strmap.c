/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:32:32 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 21:40:07 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	c;
	char	*head;
	char	*map;

	if (!s || !f)
		return (NULL);
	if ((map = ft_strnew(ft_strlen(s))))
	{
		head = map;
		while ((c = *s++))
			*map++ = f(c);
		*map = '\0';
		return (head);
	}
	return (NULL);
}
