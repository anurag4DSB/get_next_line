/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_word_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:24:36 by amittal           #+#    #+#             */
/*   Updated: 2017/06/26 04:43:39 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_word_length(char const *str, char delim)
{
	unsigned	i;

	i = 0;
	while (str[i] && str[i] != delim)
		i++;
	return (i);
}
