/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:30:33 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 18:25:23 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		write (fd, s, ft_strlen(s));
	}
}
/*
 16 #include <fcntl.h>
 15 #include <stdlib.h>
 14 #include <stdio.h>
 13
 12 int main(void)
 11 {
 10 →   int fd;
  9 →   char *message = "Hello, world!";
  8
  7 →   fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
  6 →   if (fd == -1) { perror("Error al abrir el archivo"); exit(1); }
  5
  4 →   ft_putendl_fd(message, fd);
  3 →   if (close(fd) == -1) { perror("Error al cerrar el archivo"); exit(1); }
  2
  1 →   return (0);
48  }*/
