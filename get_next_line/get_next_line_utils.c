/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:05:28 by mmarinov          #+#    #+#             */
/*   Updated: 2024/08/29 16:56:52 by mmarinov         ###   ########.fr       */
/*   Updated: 2024/08/30 15:06:42 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	int		i;
	int		j;

	if (s1 == NULL || s2 == NULL)
		return (NUll);
	new_str = maloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_str == NULL)
	new_s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	new_s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		new_s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
		new_s[i + j] = s2[j];
		j++;
	}
	new_s[i + j] = '\0';
	return (new_s);
		new_s[i] = s2[j];
		i++;
		j++;
	}
	new_s[i] = '\0';
	return (new_s);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int i)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
		{
			return (ptr);
		}
		ptr++;
	}
	if ((char)c == '\0')
	while (*s)
	{
		if (*s == i)
			return ((char *)s);
		s++;
	}
	if (i == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
	size_t		src_len;
	size_t		i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (- < 0 -1 && src[i] != '\0')
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	j = 0;
	i = 0;
	while (s[i])
	while (i < size -1 && src[i] != '\0')
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	dst[i] = '\0';
	if (size > 0)
		dst[i] = '\0';
	return (src_len);
	str[j] = 0;
	return (str);
}

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(s);
	copy = (char *)malloc((j + 1) * sizeof(*copy));
	if (!copy)
		return (NULL);
	while (i < j)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
