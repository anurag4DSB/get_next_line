/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:47 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 17:00:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	c;
	char	*start;

	if (!s)
		return (NULL);
	while (ISSPACE((c = *s)))
		s++;
	if (!*((start = (char *)s)))
		return (ft_strnew(0));
	while ((c = *s))
		s++;
	s--;
	while (ISSPACE((c = *s)))
		s--;
	return (ft_strsub(start, 0, s - start + 1));
}
