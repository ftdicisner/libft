# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 11:29:42 by dicisner          #+#    #+#              #
#    Updated: 2020/03/06 19:05:40 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR = src/
SRC = *.c
OBJ_DIR = obj/
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRC_DIR)$(SRC)
	mv *.o $(OBJ_DIR)
	ar rc $(NAME) $(OBJ_DIR)$(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	gcc main.c -L. -lft
