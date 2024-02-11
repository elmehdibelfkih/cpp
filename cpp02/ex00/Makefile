# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 03:26:15 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/10 21:28:49 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = Fixed.cpp main.cpp

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

