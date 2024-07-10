/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:48:14 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 14:46:38 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char *message = "Hello, world!";

	fd = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0666);
	if (fd == -1) { perror("Error al abrir el archivo"); exit(1); }

	ft_putendl_fd(message, fd);
	if (close(fd) == -1) { perror("Error al cerrar el archivo"); exit(1); }

	return (0);
}*/
