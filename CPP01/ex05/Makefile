# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:36:22 by tbarret           #+#    #+#              #
#    Updated: 2024/03/15 13:48:11 by tbarret          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp ./Class/Harl.cpp
OBJ = ${SRC:.cpp=.o}
NAME = harl
HEADER  = ./Class/Harl.hpp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

all: ${NAME}

%.o: %.cpp
	$(CC) ${CFLAGS} -I ${HEADER} -c $< -o $@

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re