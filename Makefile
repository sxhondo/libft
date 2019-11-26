# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 17:27:58 by sxhondo           #+#    #+#              #
#    Updated: 2019/09/23 16:50:09 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# $@ Имя цели обрабатываемого правила
# $< Имя первой зависимости обрабатываемого правила
# $^ Список всех зависимостей обрабатываемого правила

SRCS_LIST = \
	ft_atoi.c\
	ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memccpy.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_strcat.c\
	ft_strlcat.c\
	ft_strchr.c\
	ft_strcmp.c\
	ft_strcpy.c\
	ft_strdup.c\
	ft_strlen.c\
	ft_strnlen.c\
	ft_strncat.c\
	ft_strncmp.c\
	ft_strncpy.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strstr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_memalloc.c\
	ft_strnew.c\
	ft_memdel.c\
	ft_strdel.c\
	ft_strclr.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strequ.c\
	ft_strnequ.c\
	ft_strsub.c\
	ft_strjoin.c\
	ft_putstr.c\
	ft_strtrim.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_strsplit.c\
	ft_putendl.c\
	ft_putendl_fd.c\
	ft_itoa.c\
	ft_putnbr_fd.c\
	ft_strrev.c\
	ft_strndup.c\
	ft_lstnew.c\
	ft_lstlen.c\
	ft_lstdelone.c\
	ft_lstdel.c\
	ft_lstiter.c\
	ft_lstadd.c\
	ft_lstmap.c\
	ft_nblen.c\
	ft_strjoin_free.c\
	ft_lstfree.c\
	ft_lstpushback.c\
	ft_realloc.c\
	ft_vectors.c\
	get_next_line.c\
	ft_printf.c\
	csp_module.c\
	dnum_utilities.c\
	expand_argument.c\
	float_module.c\
	num_utilities.c\
	place_num.c\
	process_utilities.c\
	processings.c\
	bonuses_1.c\
	ft_itoa_base.c\
	ft_pow.c\
	ft_new_array.c

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJECTS = $(SRCS_LIST:%.c=%.o)

INC_DIR= incs/
SRCS_DIR = srcs/
OBJ_DIR = obj/

all: $(NAME)

c: $(NAME) clean

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: $(SRCS_DIR)%.c $(INC_DIR)
	$(CC) -c $(CFLAGS) -I $(INC_DIR) $<

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
