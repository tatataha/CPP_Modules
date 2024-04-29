# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 04:02:14 by muhcelik          #+#    #+#              #
#    Updated: 2024/04/03 04:02:38 by muhcelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	hibrain

SRCS	=	main.cpp

CC		=	c++ -std=c++98

FLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo "Compiling..."
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@echo "Cleaning..."
	@rm -rf $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

