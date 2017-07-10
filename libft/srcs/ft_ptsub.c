/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptsub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:01:23 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 12:01:23 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

t_point	*ft_ptsub(t_point *minuend, t_point *subtrahend)
{
	return (ft_ptnew(minuend->x - subtrahend->x, minuend->y - subtrahend->y));
}
