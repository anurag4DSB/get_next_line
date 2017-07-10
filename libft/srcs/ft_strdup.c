/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 20:14:51 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:42:33 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dup;

	if ((dup = ft_strnew(ft_strlen(src))))
		return (ft_strcpy(dup, src));
	return (NULL);
}
