/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:48:55 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/29 17:07:00 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_save_remainder(char *remainder)
{
	char	*newline_pos;
	char	*new_remainder;

	if (!remainder)
		return (NULL);
	newline_pos = ft_strchr(remainder, '\n');
	if (newline_pos)
	{
		new_remainder = ft_strdup(newline_pos + 1);
		free(remainder);
		return (new_remainder);
	}
	free(remainder);
	return (NULL);
}

char	*ft_extract_line(char **remainder)
{
	char	*line;
	char	*newline_pos;
	size_t	len;

	len = 0;
	if (!*remainder || !**remainder)
		return (NULL);
	newline_pos = ft_strchr(*remainder, '\n');
	if (newline_pos)
	{
		len = newline_pos - *remainder + 1;
	}
	else
	{
		line = (char *)ft_strlen(*remainder);
	}
	line = (char *)malloc(len + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, *remainder, len);
	line[len] = '\n';
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*line;
	char		buffer[BUFFER_SIZE + 1];
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		remainder = ft_strjoin(remainder, buffer);
		if (ft_strchr(remainder, '\n'))
			break ;
	}
	if (bytes_read < 0 || (!bytes_read && !remainder))
		return (NULL);
	line = ft_extract_line(&remainder);
	remainder = ft_save_remainder(remainder);
	return (line);
