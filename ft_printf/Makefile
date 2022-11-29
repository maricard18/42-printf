# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maricard <maricard@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 08:21:41 by maricard          #+#    #+#              #
#    Updated: 2022/11/29 13:11:40 by maricard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -f

CC = clang

CFLAGS = -Wall -Werror -Wextra

SRC = ft_printf.c ft_char.c ft_number.c ft_putchar.c ft_string.c \
ft_strlen.c ft_hexadecimal_x.c ft_hexadecimal_X.c ft_unsigned.c   \


SRC-OBJ = $(SRC:.c=.o)

%.o:		%.c
			$(CC) -c $(CFLAGS) $^

all:		$(NAME)
		
$(NAME):	$(SRC-OBJ)	
			ar rcs $(NAME) $(SRC-OBJ) 

clean:
			$(RM) $(SRC-OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

