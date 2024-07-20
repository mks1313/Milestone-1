/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:01:41 by mmarinov          #+#    #+#             */
/*   Updated: 2024/07/10 11:41:34 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
	{
		ft_putchar_fd(n + '0', fd);
	}
}
/*
int main(void)
{
	// Crear y abrir un archivo para escribir
	int fd = open("test_output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		perror("Error abriendo el archivo");
		return 1;
	}

	// Pruebas de ft_putnbr_fd con diferentes números
	ft_putnbr_fd(12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-12345, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(2147483647, fd);
	write(fd, "\n", 1);

	// Pruebas de ft_putnbr_fd en la salida estándar (stdout)
	ft_putnbr_fd(12345, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-12345, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(0, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(-2147483648, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);
	ft_putnbr_fd(2147483647, STDOUT_FILENO);
	write(STDOUT_FILENO, "\n", 1);

	// Cerrar el archivo
	close(fd);

	return 0;
}*/
