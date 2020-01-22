# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 11:29:42 by dicisner          #+#    #+#              #
#    Updated: 2020/01/22 17:56:22 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c
OBJ = ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
	ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlcpy.o ft_strlcat.o \
	ft_strchr.o ft_strrchr.o
FLAGS = -Wall -Wextra -Werror
INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

test:
	bash ../Libftest/grademe.sh
