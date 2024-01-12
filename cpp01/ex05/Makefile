# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/12 09:48:39 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/12 13:46:00 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Harl
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC = Harl.cpp main.cpp 

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp Harl.hpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
