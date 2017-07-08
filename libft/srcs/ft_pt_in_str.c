/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_in_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 17:00:46 by amittal           #+#    #+#             */
/*   Updated: 2017/07/03 00:42:40 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

#include "libft.h"

char	*ft_pt_in_str(t_point *pt, char *str, char delim)
{
	char		*line_start;
	char		*line_end;
	char		*f;
	ptrdiff_t	initial_offset;
	int			i;

	initial_offset = str - ft_strrchr(str, delim) + 1;
	f = str;
	i = ABS(pt->y);
	while (i-- > 0)
	{
		if (pt->y > 0)
		{
			if ((f = ft_strchr(f, delim) + 1) == NULL)
				return (NULL);
		}
		else
		{
			if ((line_end = ft_strrchr(f, delim)) == NULL)
				return (NULL);
			line_end--;
			f = line_end;
			if ((line_start = ft_strrchr(f, delim)) == NULL)
				return (NULL);
			line_start++;
			f = line_start;
		}
	}
	line_start = f;
	line_end = ft_strchr(f, delim) - 1;
	f += initial_offset + pt->x;
	return (initial_offset < ft_word_length(line_start, delim) &&
			f >= line_start && f <= line_end
			? f : NULL);
}
