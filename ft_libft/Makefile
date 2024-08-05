# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/19 13:27:43 by mmarinov          #+#    #+#              #
#    Updated: 2024/07/17 16:39:46 by mmarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HBONUS = .bonus

# Compilador y flags:

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
      ft_strlen.c ft_tolower.c ft_toupper.c ft_memset.c ft_memcpy.c \
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c \
	ft_calloc.c ft_bzero.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_strmapi.c ft_split.c ft_striteri.c

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Objetos

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

# Reglas:

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

#  Compilacion e objetos:

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $^
	touch $(HBONUS)


%.o: %.c Makefile libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Limpieza:

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
