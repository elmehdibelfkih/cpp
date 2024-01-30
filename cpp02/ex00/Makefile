# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/27 03:26:15 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/28 11:06:56 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Fixed
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	Fixed.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

