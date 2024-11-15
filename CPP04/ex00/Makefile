# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:36:22 by tbarret           #+#    #+#              #
#    Updated: 2024/06/10 20:25:40 by tbarret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ./Class/Animal.cpp ./Class/Cat.cpp ./Class/Dog.cpp ./Class/WrongCat.cpp ./Class/WrongAnimal.cpp
OBJ = ${SRC:.cpp=.o}
NAME = animal
HEADER  = ./Class/Animal.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: ${NAME}

%.o: %.cpp
	$(CC) ${CFLAGS} -c $< -o $@

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -I ${HEADER} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re