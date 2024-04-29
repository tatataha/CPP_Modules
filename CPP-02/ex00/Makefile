# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 03:20:20 by muhcelik          #+#    #+#              #
#    Updated: 2024/04/05 03:20:47 by muhcelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

SRCS	=	main.cpp Fixed.cpp

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