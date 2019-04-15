# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 19:49:42 by sxhondo           #+#    #+#              #
#    Updated: 2019/04/15 20:07:48 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

OBJECTS = *.o

HEADER = ./includes/libft.h

FLAG = -Wall -Wextra -Werror

all : $(NAME)
		
$(NAME):
	@echo "Linking..."
	gcc $(FLAG) -c $(SRCS)
	@echo "Creating a library..."
	ar rc $(NAME) $(OBJECTS)
	@echo "Indexing library..."
	@ranlib $(NAME)
	
clean:
	@echo "Deleting .o's"
	@rm -rf $(OBJECTS)

fclean: clean
	@echo "Deleting library..."
	@rm -rf $(NAME)

re: fclean all
