# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 21:36:20 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/12 21:09:11 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = Dog.cpp Cat.cpp main.cpp Animal.cpp WrongAnimal.cpp WrongCat.cpp
HDRS = Dog.hpp Cat.hpp Animal.hpp WrongAnimal.hpp WrongCat.hpp


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
