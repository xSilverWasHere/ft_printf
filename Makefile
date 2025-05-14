# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpedro-g <jpedro-g@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/24 12:06:30 by jpedro-g          #+#    #+#              #
#    Updated: 2025/04/24 12:06:53 by jpedro-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putunsigned.c \
			ft_puthex.c \
			ft_printptr.c \

OBJ = $(SRC:.c=.o)

CC = cc -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
 
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f '*.o'
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

