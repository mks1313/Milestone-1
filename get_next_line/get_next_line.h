/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:05:50 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/29 16:29:36 by mmarinov         ###   ########.fr       */
/*   Updated: 2024/09/02 18:28:28 by mmarinov         ###   ########.fr       */
/*   Updated: 2024/08/30 14:44:47 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int i);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
