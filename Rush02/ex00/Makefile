# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmercer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 20:11:41 by tmercer           #+#    #+#              #
#    Updated: 2018/07/08 20:11:57 by tmercer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = main.c checks.c find_match.c ft_rushes.c

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
