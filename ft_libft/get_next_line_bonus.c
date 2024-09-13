/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:32:17 by mmarinov          #+#    #+#             */
/*   Updated: 2024/09/10 16:24:19 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	free_memory(char **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
	}
}

static char	*extract_line(char **buffer)
{
	size_t	i;
	char	*line;
	char	*new_buffer;

	if (!buffer || !*buffer)
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
	if (!new_buffer)
	{
		free(line);
		return (NULL);
	}
	*buffer = new_buffer;
	return (line);
}

static int	update_buffer(char **buffer, char *read_buf)
{
	char	*temp;

	if (*buffer)
	{
		temp = ft_strjoin(*buffer, read_buf);
		if (!temp)
			return (-1);
		free_memory(buffer);
		*buffer = temp;
	}
	else
	{
		*buffer = ft_strdup(read_buf);
		if (!*buffer)
			return (-1);
	}
	return (0);
}

static int	read_from_file(int fd, char **buffer)
{
	char	*read_buf;
	ssize_t	bytes_read;

	read_buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!read_buf)
		return (-1);
	bytes_read = read(fd, read_buf, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (free(read_buf), 0);
	read_buf[bytes_read] = '\0';
	if (update_buffer(buffer, read_buf) == -1)
		return (free(read_buf), -1);
	return (free(read_buf), bytes_read);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer[MAX_FILES];
	ssize_t		b_read;

	b_read = 1;
	if (fd < 0 || BUFFER_SIZE <= 0 || fd >= MAX_FILES)
		return (NULL);
	if (!buffer[fd])
		buffer[fd] = ft_strdup("");
	while (buffer[fd] && !ft_strchr(buffer[fd], '\n'))
	{
		b_read = read_from_file(fd, &buffer[fd]);
		if (b_read <= 0)
			return (free_memory(&buffer[fd]), NULL);
	}
	if (b_read == 0 && (!buffer[fd] || *buffer[fd] == '\0'))
	{
		free_memory(&buffer[fd]);
		return (NULL);
	}
	line = extract_line(&buffer[fd]);
	return (line);
}
