# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 10:23:05 by mmarinov          #+#    #+#              #
#    Updated: 2024/06/17 16:01:51 by mmarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror


SRCDIR = ./srcs
INCDIR = ./includes


SRCS = $(SRCDIR)/ft_putchar.c \
       $(SRCDIR)/ft_putstr.c \
       $(SRCDIR)/ft_strcmp.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_swap.c

OBJS =	$(SRCS:.c=.o)

RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -I $(INCDIR)  -o $@ $<


#rule to create static library.
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
