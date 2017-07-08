/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slicerpl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 15:28:00 by amittal           #+#    #+#             */
/*   Updated: 2017/07/01 14:22:41 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_slicerpl(t_slice *slc, char q, char r)
{
	char	*f;
	
	f = NULL;
	while ((f = ((ft_slicechr(slc, q)))))
		*f = r;
	return (slc->str);
}
