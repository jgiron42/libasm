# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 12:01:33 by jgiron            #+#    #+#              #
#    Updated: 2021/01/18 13:16:57 by jgiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm

NAME_LIB = libasm.a

SRCS = 	ft_write.s \
		ft_read.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NASM = nasm

NASMFLAGS = -f elf64

OBJ = $(SRCS:.s=.o)

%.o : %.s
	$(NASM) $(NASMFLAGS) $< -o $@

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME_LIB) $(OBJ)
	ranlib $(NAME_LIB)

ccproject :
	$(CC) $(CFLAGS) main.c first_part_tests.c second_part_tests.c $(NAME_LIB)
	
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME_LIB)
	rm -f ./a.out

re : fclean all
