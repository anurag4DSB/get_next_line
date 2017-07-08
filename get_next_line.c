/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 17:08:41 by amittal           #+#    #+#             */
/*   Updated: 2017/07/07 17:08:42 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"

int					get_next_line(const int fd, char **line)
{
	static size_t	i;
	int				*buf;
	char			buffer[BUFF_SIZE + 1];


	if (!(*line = ft_memalloc(BUFF_SIZE + 1)))
		return (-1);
	//*line[0] = '\0';
	while(read(fd, buffer, BUFF_SIZE) > 0)
	{
		i = 0;
		while (i <= BUFF_SIZE)
		{
			ft_strncat(*line, buffer, 1);
			if (buffer[0] == '\n')
				return(1);
			i++;
		}
		{
			if (!(*line = realloc(*line, BUFFSIZE)))
				return(-1);
			ft_strncat(*line, buffer, BUFF_SIZE);
		}
	}
	return (0);
}