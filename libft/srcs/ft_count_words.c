/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:24:12 by amittal           #+#    #+#             */
/*   Updated: 2017/06/18 20:24:12 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_count_words(char const *str, char delim)
{
	unsigned	i;

	i = 0;
	while (*str)
	{
		str = ft_next_word(str, delim);
		i++;
	}
	return (i);
}
