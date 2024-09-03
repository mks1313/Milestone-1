/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:48:55 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/29 17:07:00 by mmarinov         ###   ########.fr       */
/*   Updated: 2024/09/02 20:12:37 by mmarinov         ###   ########.fr       */
/*   Updated: 2024/08/30 14:23:33 by mmarinov         ###   ########.fr       */
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
		len = ft_strlen(*remainder);
	}
	line = (char *)malloc(len + 1);
	if (!line)
		return (NULL);
	ft_strlcpy(line, *remainder, len + 1);
	if (newline_pos)
	{
		len = newline_pos - *remainder + 1;
	}
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	char		buffer[BUFFER_SIZE];
	static char	*saved_data;
	size_t		result_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	result_line = read(fd, buffer, BUFFER_SIZE);
	if (result_line == 0)
		return ;

}
