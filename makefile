# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgiron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/18 12:01:33 by jgiron            #+#    #+#              #
#    Updated: 2021/01/27 13:44:00 by jgiron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm

NAME_LIB = libasm.a



CC = gcc

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S), Linux)
    SRCS = 	ft_write.s \
		ft_read.s \
		ft_strcmp.s \
		ft_strcpy.s \
		ft_strdup.s \
		ft_strlen.s 
    NASMFLAGS ?= -f elf64
endif
ifeq ($(UNAME_S), Darwin)
    SRCS = 	ft_write_macos.s \
		ft_read_macos.s \
		ft_strcmp_macos.s \
		ft_strcpy_macos.s \
		ft_strdup_macos.s \
		ft_strlen_macos.s 
    NASMFLAGS ?= -f macho64

endif

OBJ = $(SRCS:.s=.o)

CFLAGS = -Wall -Wextra -Werror

NASM = nasm

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