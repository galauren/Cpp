# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aghanibe <aghanibe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/14 04:10:29 by aghanibe          #+#    #+#              #
#    Updated: 2026/03/14 04:20:04 by aghanibe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		Fixed.cpp
OBJ = $(SRC:.cpp=.o)
NAME = fixed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all