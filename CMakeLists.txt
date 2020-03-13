# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    CMakeLists.txt                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sxhondo <w13cho@gmail.com>                 +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/02 16:27:46 by sxhondo           #+#    #+#              #
#    Updated: 2020/03/02 16:27:47 by sxhondo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmake_minimum_required(VERSION 2.8)

project (libft)

set(BUILD_FLAGS "-Wall -Wextra -Werror")
set(DST ft)

set(SRC_DIR ${PROJECT_SOURCE_DIR}/srcs/)
set(INC_DIR ${PROJECT_SOURCE_DIR}/incs/)

include_directories(${INC_DIR})
file(GLOB_RECURSE LIBFT_SOURCES ${SRC_DIR}*.c)

add_library(${PROJECT_NAME} STATIC ${LIBFT_SOURCES} srcs/ft_libc/ft_free_2d_array.c)
target_include_directories(${PROJECT_NAME} PUBLIC ${INC_DIRS})
set_target_properties(${PROJECT_NAME} PROPERTIES
                        ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}
                        ARCHIVE_OUTPUT_NAME ${DST}
						COMPILE_FLAGS ${BUILD_FLAGS})
						