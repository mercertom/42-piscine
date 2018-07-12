# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmercer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/03 20:35:24 by tmercer           #+#    #+#              #
#    Updated: 2018/07/03 20:35:30 by tmercer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRC = do_op.c do_op_helper.c do_op_helper2.c

OUT = do-op

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)
 
fclean: clean
	/bin/rm -f $(OUT)

re: fclean all