# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 15:48:08 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/09 15:54:28 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	main.cpp	\
		Zombie.cpp	\
		zombieHorde.cpp \


OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$() $(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp
	$() $(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all