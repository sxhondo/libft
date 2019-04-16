# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <sxhondo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/15 22:10:26 by sxhondo           #+#    #+#              #
#    Updated: 2019/04/16 14:38:44 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=ft_atoi.c \
     ft_bzero.c \
     ft_isalnum.c \
     ft_isalpha.c \
     ft_isascii.c \
     ft_isdigit.c \
     ft_isprint.c \
     ft_memccpy.c \
     ft_memchr.c \
     ft_memcmp.c \
     ft_memcpy.c \
     ft_memmove.c \
     ft_memset.c \
     ft_putchar.c \
     ft_putnbr.c \
     ft_strcat.c \
     ft_strchr.c \
     ft_strcmp.c \
     ft_strcpy.c \
     ft_strdup.c \
     ft_strlen.c \
     ft_strncat.c \
     ft_strncmp.c \
     ft_strncpy.c \
     ft_strnstr.c \
     ft_strrchr.c \
     ft_strstr.c \
     ft_swap.c \
     ft_tolower.c \
     ft_toupper.c \

OBJECTS=ft_atoi.o \
        ft_bzero.o \
        ft_isalnum.o \
        ft_isalpha.o \
        ft_isascii.o \
        ft_isdigit.o \
        ft_isprint.o \
        ft_memccpy.o \
        ft_memchr.o \
        ft_memcmp.o \
        ft_memcpy.o \
        ft_memmove.o \
        ft_memset.o \
        ft_putchar.o \
        ft_putnbr.o \
        ft_strcat.o \
        ft_strchr.o \
        ft_strcmp.o \
        ft_strcpy.o \
        ft_strdup.o \
        ft_strlen.o \
        ft_strncat.o \
        ft_strncmp.o \
        ft_strncpy.o \
        ft_strnstr.o \
        ft_strrchr.o \
        ft_strstr.o \
        ft_swap.o \
        ft_tolower.o \
        ft_toupper.o \

INCLUDES=./

all: $(NAME)

$(NAME): $(SRCS) libft.h
	@echo "Making object files..."
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@echo "Making library..."
	@ar rc $(NAME) $(OBJECTS)
	@echo "Indexing library..."
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all