/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:30:44 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/07 16:31:43 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "get_next_line_bonus.h"

void	close_files(int fds[], int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		close(fds[i]);
		i++;
	}
}

void	process_files(int num_files, int fds[], char *filenam[], int line_num[])
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (num_files > 0)
	{
		line = get_next_line(fds[i]);
		if (line == NULL)
		{
			if (fds[i] != 0)
				close(fds[i]);
			printf(".............End of %s.............\n", filenam[i]);
			j = i;
			while (j < num_files - 1)
			{
				fds[j] = fds[j + 1];
				filenam[j] = filenam[j + 1];
				line_num[j] = line_num[j + 1];
				j++;
			}
			num_files--;
			if (i >= num_files)
				i = 0;
		}
		else
		{
			printf("[%s] Line %d: %s", filenam[i], line_num[i], line);
			free(line);
			line_num[i]++;
			i = (i + 1) % num_files;
		}
	}
}

int	main(int argc, char **argv)
{
	int		fds[MAX_FILES];
	char	*filenames[MAX_FILES];
	int		line_numbers[MAX_FILES];
	int		num_files;
	int		i;

	if (argc == 1)
	{
		fds[0] = 0;
		filenames[0] = "stdin";
		line_numbers[0] = 1;
		num_files = 1;
	}
	else
	{
		num_files = argc - 1;
		if (num_files > MAX_FILES)
			return (1);
		i = 0;
		while (i < num_files)
		{
			fds[i] = open(argv[i + 1], O_RDONLY);
			if (fds[i] < 0)
				return (close_files(fds, i), 1);
			filenames[i] = argv[i + 1];
			line_numbers[i] = 1;
			i++;
		}
	}
	process_files(num_files, fds, filenames, line_numbers);
	return (0);
}
