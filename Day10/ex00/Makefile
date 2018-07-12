# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmercer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 20:38:09 by tmercer           #+#    #+#              #
#    Updated: 2018/07/02 21:01:30 by tmercer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c ./srcs/ft_strlen.c

OUT = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRC)
	ar rcs $(NAME) $(OUT)

clean:
	/bin/rm -f *.o
 
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
