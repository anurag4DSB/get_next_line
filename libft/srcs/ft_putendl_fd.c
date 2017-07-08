/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:20 by amittal           #+#    #+#             */
/*   Updated: 2017/06/21 19:16:35 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	newline;

	if (s)
	{
		newline = '\n';
		write(fd, s, ft_strlen(s));
		write(fd, &newline, 1);
	}
}
