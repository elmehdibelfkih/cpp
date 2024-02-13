# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/11 21:36:20 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/13 15:58:10 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimal
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = Dog.cpp Cat.cpp main.cpp AAnimal.cpp Brain.cpp
HDRS = Dog.hpp Cat.hpp AAnimal.hpp Brain.hpp


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
