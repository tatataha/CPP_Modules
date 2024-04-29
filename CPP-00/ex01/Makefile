# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/02 02:48:56 by muhcelik          #+#    #+#              #
#    Updated: 2024/04/02 02:52:05 by muhcelik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

SRCS	=	PhoneBook.cpp Contact.cpp program.cpp

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

