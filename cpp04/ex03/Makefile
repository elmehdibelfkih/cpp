# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebelfkih <ebelfkih@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 16:12:24 by ebelfkih          #+#    #+#              #
#    Updated: 2024/02/14 05:03:30 by ebelfkih         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = AMateria
GPP = c++ -std=c++98 -Wall -Wextra -Werror
SRC = AMateria.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp  main.cpp
HDRS = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp MateriaSource.hpp


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
