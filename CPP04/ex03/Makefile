# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:36:22 by tbarret           #+#    #+#              #
#    Updated: 2024/06/11 18:57:28 by tbarret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ./Class/AMateria.cpp ./Class/Character.cpp ./Class/Cure.cpp ./Class/Ice.cpp ./Class/MateriaSource.cpp 
OBJ = ${SRC:.cpp=.o}
NAME = Interface
HEADER  = ./Class/AMateria.hpp
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