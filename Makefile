# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dicisner <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/20 11:29:42 by dicisner          #+#    #+#              #
#    Updated: 2020/01/24 14:24:38 by dicisner         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c \
	ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isdigit.c \
	ft_atoi.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_toupper.c ft_tolower.c ft_strdup.c ft_calloc.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c
OBJ = ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o \
	ft_memmove.o ft_memchr.o ft_memcmp.o ft_strlcpy.o ft_strlcat.o \
	ft_strchr.o ft_strrchr.o ft_strnstr.o ft_strncmp.o ft_isdigit.o \
	ft_atoi.o ft_isalpha.o ft_isalnum.o ft_isascii.o ft_isprint.o \
	ft_toupper.o ft_tolower.o ft_strdup.o ft_calloc.o ft_substr.o \
	ft_strjoin.o ft_strtrim.o ft_split.o
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
	bash ../Libftest/grademe.sh -p1
