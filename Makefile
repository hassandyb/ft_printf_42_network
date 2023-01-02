# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-dyb <hed-dyb@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 15:38:14 by hed-dyb           #+#    #+#              #
#    Updated: 2022/11/12 17:07:36 by hed-dyb          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = ft_printf.c functions.c

NAME = libftprintf.a

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o : %.c ft_printf.h
	cc -Wall -Werror -Wextra -c $< 

clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean clean



