# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 17:32:24 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/09 17:38:13 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	main.cpp


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