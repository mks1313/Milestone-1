# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/18 15:46:56 by mmarinov          #+#    #+#              #
#    Updated: 2024/07/20 14:48:45 by mmarinov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la biblioteca
NAME = libftprintf.a

# Archivos fuente de ft_printf
SRC = ft_printf.c convert.c utils.c

# Archivos objeto generados a partir de los archivos fuente
OBJ = $(SRC:.c=.o)

# Directorio y archivo de la biblioteca libft
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

# Compilador y opciones de compilación
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror

# Comandos
AR = ar rcs
RM = rm -f

# Regla principal: compilar todo
all: $(NAME)

# Compilar libft usando su propio Makefile
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR) bonus

# Crear la biblioteca libftprintf.a
$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ)

# Regla para compilar archivos .c en .o
%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

# Regla para limpiar archivos objeto
clean:
	$(RM) $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

# Regla para limpiar todo, incluyendo la biblioteca generada
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

# Regla para recompilar todo desde cero
re: fclean all

.PHONY: all clean fclean re

