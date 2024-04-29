# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/03 15:40:51 by muhcelik          #+#    #+#              #
#    Updated: 2024/04/03 15:43:06 by muhcelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	weapon

SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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
