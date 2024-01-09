# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 06:54:22 by ebelfkih          #+#    #+#              #
#    Updated: 2024/01/09 09:31:02 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
GPP = g++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address
SRC =	Zombie.cpp newZombie.cpp randomChump.cpp main.cpp 


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
