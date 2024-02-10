# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 13:11:11 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/10 17:41:03 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
GPP = c++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC = ClapTrap.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp Fixed.hpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
