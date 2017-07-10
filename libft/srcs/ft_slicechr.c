/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_slicechr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 14:24:25 by amittal           #+#    #+#             */
/*   Updated: 2017/07/03 00:36:56 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_slicechr(t_slice *slc, char query)
{
	char			*f;
	char			*start;
	size_t			line_count;
	const size_t	line_max = slc->y1 - slc->y0 + 1;
	const size_t	len_max = slc->x1 - slc->x0 + 1;

	line_count = 0;
	start = slc->str + slc->x0;
	f = ft_wordnchr(start, query, slc->delim, len_max);
	while (++line_count < line_max && f == NULL)
	{
		if ((start = ft_strchr(start, slc->delim)) == NULL)
			return (NULL);
		start += 1 + slc->x0;
		f = ft_wordnchr(start, query, slc->delim, len_max);
	}
	return (f);
}
