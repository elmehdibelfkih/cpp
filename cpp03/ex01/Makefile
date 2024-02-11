# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/10 13:11:11 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/11 01:35:22 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
GPP = c++ -std=c++98 -Wall -Wextra -Werror 
SRC = ClapTrap.cpp ScavTrap.cpp main.cpp
HDRS = ClapTrap.hpp ScavTrap.hpp


OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp $(HDRS)
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
