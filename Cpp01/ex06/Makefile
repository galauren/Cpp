# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kon <kon@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 05:18:53 by aghanibe          #+#    #+#              #
#    Updated: 2026/01/21 20:56:41 by kon              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	main.cpp \
		Harl.cpp
OBJ = $(SRC:.cpp=.o)
NAME = harlFilter
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