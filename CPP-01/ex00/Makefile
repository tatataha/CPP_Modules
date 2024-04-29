# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 07:53:15 by muhcelik          #+#    #+#              #
#    Updated: 2024/04/02 07:54:22 by muhcelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brainz

SRCS	=	main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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

