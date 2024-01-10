# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 14:05:22 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/10 14:25:15 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	main.cpp replace.cpp


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