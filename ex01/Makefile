# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/04 11:42:08 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/06 04:16:08 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
GPP = g++ -std=c++98 -Wall -Wextra -Werror

SRC =	main.cpp		\
		PhoneBook.cpp	\
		Contact.cpp		\

OBJ = $(SRC:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$() $(GPP) -o $(NAME) $(OBJ)

%.o: %.cpp | $(OBJ_PATH)
	$() $(GPP) -c $< -o $@

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

