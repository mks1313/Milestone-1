# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinov <mmarinov@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/17 16:28:01 by mmarinov          #+#    #+#              #
#    Updated: 2024/06/17 17:12:59 by mmarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file


CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_display_file.c

OBJS = ${SRCS:.c=.o}

RM = rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ $<


${NAME}: ${OBJS}
	 ${CC} ${CFLAGS} -o $@ $^

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
