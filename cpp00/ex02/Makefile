# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 03:36:26 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/12 13:36:56 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp Account.hpp
	$(GPP) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all