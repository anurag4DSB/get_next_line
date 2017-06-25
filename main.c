/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 16:05:27 by amittal           #+#    #+#             */
/*   Updated: 2017/06/25 16:05:29 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    
    int fd;
    if(argc == 2)
    {
        if((fd = open(argv[1], O_RDONLY, 0)) == -1)
            {
            printf("Error opening the file: %s", argv[1]);
            return (0);
            }
        else 
            printf("FD: %d\n", fd);
    }
    close(fd);
}