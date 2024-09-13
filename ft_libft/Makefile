# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 13:27:43 by mmarinov          #+#    #+#              #
#    Updated: 2024/09/13 15:09:26 by mmarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Compilador y flags:

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
      ft_strlen.c ft_tolower.c ft_toupper.c ft_memset.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c \
	ft_calloc.c ft_bzero.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strmapi.c ft_split.c ft_striteri.c ft_lstnew.c ft_lstadd_front.c \
	ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
	ft_lstiter.c ft_lstmap.c ft_printf.c utils_csp.c utils_diuxx.c ft_utoa.c \
	get_next_line.c ft_strndup.c

# Objetos

OBJS = $(SRCS:.c=.o)

# Reglas:

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^


%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza:

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
