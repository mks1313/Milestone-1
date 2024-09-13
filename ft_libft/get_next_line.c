/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:48:55 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/13 15:14:39 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Free the memory pointed to by 'ptr' and set it to NULL.
 * */

static void	free_memory(char **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

/**
 * Extract the next line from 'buffer' and update the buffer.
 * */

static char	*extract_line(char **buffer)
{
	size_t	i;
	char	*line;
	char	*new_buffer;

	if (!*buffer)
		return (NULL);
	i = 0;
	while ((*buffer)[i] && (*buffer)[i] != '\n')
		i++;
	if ((*buffer)[i] == '\n')
		i++;
	line = ft_strndup(*buffer, i);
	if (!line)
		return (NULL);
	new_buffer = ft_strdup(*buffer + i);
	free_memory(buffer);
	*buffer = new_buffer;
	if (!*buffer || !**buffer)
		free_memory(buffer);
	return (line);
}

/**
 * Read data from the fd into 'buffer'.
 */
static int	read_from_file(int fd, char **buffer)
{
	char	*read_buf;
	char	*temp;
	ssize_t	bytes_read;

	read_buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	bytes_read = read(fd, read_buf, BUFFER_SIZE);
	if (bytes_read < 0)
	{
		free_memory(buffer);
		return (free(read_buf), bytes_read);
	}
	if (bytes_read == 0)
		return (free(read_buf), bytes_read);
	read_buf[bytes_read] = '\0';
	if (*buffer)
	{
		temp = ft_strjoin(*buffer, read_buf);
		if (!temp)
			return (free_memory(buffer), free(read_buf), -1);
		free_memory(buffer);
		*buffer = temp;
	}
	else
		*buffer = ft_strdup(read_buf);
	return (free(read_buf), bytes_read);
}

/**
 * Read a line from the fd.
 */
char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;
	ssize_t		bytes_read;

	bytes_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE >= 2147483647)
		return (free_memory(&buffer), NULL);
	while (1)
	{
		if (!buffer || !ft_strchr(buffer, '\n'))
		{
			bytes_read = read_from_file(fd, &buffer);
			if (bytes_read <= 0)
				break ;
		}
		else
			break ;
	}
	if ((bytes_read == 0 && (!buffer || *buffer == '\0')) || bytes_read < 0)
	{
		free_memory(&buffer);
		return (NULL);
	}
	line = extract_line(&buffer);
	return (line);
}
