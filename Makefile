# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 11:29:42 by dicisner          #+#    #+#              #
#    Updated: 2021/10/11 20:55:29 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC_DIR_LIBFT = src/libft
SRC_DIR_GNL = src/gnl
SRC = *.c
OBJ_DIR = obj/
OBJ = $(SRC:.c=.o)
FLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRC_DIR_LIBFT)/$(SRC) $(SRC_DIR_GNL)/$(SRC)
	mkdir -p $(OBJ_DIR)
	mv *.o $(OBJ_DIR)
	ar rc $(NAME) $(OBJ_DIR)$(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test: test/test.c
	gcc test/test.c -L. -lft
