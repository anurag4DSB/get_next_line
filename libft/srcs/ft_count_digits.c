/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 20:17:46 by amittal           #+#    #+#             */
/*   Updated: 2017/06/19 21:50:01 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

size_t		ft_count_digits(int value)
{
	size_t	count;

	count = value == 0;
	while (value)
	{
		count++;
		value /= 10;
	}
	return (count);
}
