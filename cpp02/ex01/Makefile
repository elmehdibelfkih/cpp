# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/07 11:38:18 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/07 11:39:00 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
GPP = c++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
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
