/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:05:21 by mmarinov          #+#    #+#             */
/*  Updated: 2024/09/02 16:45:04 by mmarinov         ###   ########.fr        */
/*   Updated: 2024/08/30 14:58:41 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>
#include <float.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <time.h>
#include <wchar.h>
#include <fcntl.h>
#include <string.h>
#include "get_next_line.h"

int	main(int	argc, char **argv)
{
	int		fd;
	char	*line;
	if (argc < 1)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error al abrir el archivo\n");
int	main(int argc, char **argv)
{
	int		fd;
	char	*line;

	if (argc != 2)
	{
		printf("%s <file_path>\n", argv[0]);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	line = get_next_line(fd);
	printf("1st line: %s", line);
	if (fd == -1)
	{
		perror("Error opening file");
		return (1);
	}
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
