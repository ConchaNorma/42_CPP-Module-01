# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnorma <cnorma@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/13 19:39:22 by cnorma            #+#    #+#              #
#    Updated: 2022/04/21 19:52:15 by cnorma           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	zombie

SRC			=	Zombie.cpp	main.cpp	zombieHorde.cpp

SRC_RIR 	=	./

OBJ_DIR		=	./obj/

OBJ			=	$(patsubst $(SRC_DIR)%, $(OBJ_DIR)%, $(SRC:.cpp=.o))

HEADER		=	./Zombie.hpp

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror -g -std=c++98 -O2


all:			$(OBJ_DIR) $(NAME)

$(OBJ_DIR)%.o:	%.cpp $(HEADER)
				$(CC) $(FLAGS) -c $< -o $@

$(NAME):		$(OBJ) $(HEADER)
				$(CC) $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR):
				@mkdir -p $@

clean:
				@rm -rf $(OBJ) $(OBJ_DIR)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all

.PHONY:			all re clean fclean
