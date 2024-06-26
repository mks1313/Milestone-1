/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:21:00 by mmarinov          #+#    #+#             */
/*   Updated: 2024/06/17 17:21:15 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024

void	display_error(const char *error_message)
{
	int	i;
	
	i = -1;
	while (error_message[++i] != '\0')
		write (2, &error_message[i], 1);
}

void	display_file(int fd)
{
	char	buffer[BUFFER_SIZE];
	int		bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			break ;
		write(1, buffer, bytes_read);
	}
}

int	main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
	{
		display_error("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		display_error("Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		display_error("Cannot read file.\n");
		return (1);
	}
	display_file(fd);
	close(fd);
	return (0);
}
