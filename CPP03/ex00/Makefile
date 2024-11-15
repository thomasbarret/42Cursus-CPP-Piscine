# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:36:22 by tbarret           #+#    #+#              #
#    Updated: 2024/06/09 14:42:33 by tbarret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ./Class/ClapTrap.cpp
OBJ = ${SRC:.cpp=.o}
NAME = ClapTrap
HEADER  = ./Class/ClapTrap.hpp
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