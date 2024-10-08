/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 11:33:25 by mmarinov          #+#    #+#             */
/*   Updated: 2024/10/08 16:17:10 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef MAX_FILES
#  define MAX_FILES 1024
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line_bonus(int fd);
char	*ft_strjoin_bonus(const char *s1, char const *s2);
size_t	ft_strlen_bonus(const char *s);
char	*ft_strchr_bonus(const char *str, int c);
char	*ft_strdup_bonus(const char *s);
char	*ft_strndup_bonus(const char *s, size_t n);

#endif
