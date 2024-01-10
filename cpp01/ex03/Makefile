# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 18:02:55 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/10 12:39:21 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp


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