# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 17:27:58 by sxhondo           #+#    #+#              #
#    Updated: 2019/12/11 22:31:59 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

LIB = ./libft.a
CMAKE_DIR = ./cmake-build/

all: $(NAME)

$(NAME): cmake

cmake: $(CMAKE_DIR) $(CMAKE_DIR)Makefile
	$(MAKE) -C $(CMAKE_DIR)

$(CMAKE_DIR):
	mkdir -p $(CMAKE_DIR)

$(CMAKE_DIR)Makefile:
	cd $(CMAKE_DIR) && cmake ../

clean:
	rm -rf $(CMAKE_DIR)

fclean: clean
	rm -rf $(LIB)

re: fclean all
