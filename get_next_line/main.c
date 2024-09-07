/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:19:04 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/05 15:19:15 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"
//-D BUFFER_SIZE=9223372036854775807 BUFFER_SIZE=12490162151 12490163352

int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc == 1)
		fd = 0;
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			return (1);
	}
	line = get_next_line(fd);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	if (fd != 0)
	{
		close(fd);
	}
	return (0);
}
