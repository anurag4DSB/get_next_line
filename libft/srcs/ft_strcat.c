/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:37:18 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 16:40:58 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	c;
	char	*head;

	head = dest;
	while (*dest)
		dest++;
	while ((c = *src++))
		*dest++ = c;
	*dest = '\0';
	return (head);
}
