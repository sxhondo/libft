# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 19:49:42 by sxhondo           #+#    #+#              #
#    Updated: 2019/04/14 21:27:40 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

HDR = ./includes/libft.h

FLAG = -Wall -Wextra -Werror -g

all : $(NAME)
		
$(NAME):
	

objects:
	gcc $(FLAG) -c $(SRCS) 
	@echo "Making objects files..."

