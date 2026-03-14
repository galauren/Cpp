# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lupetit <lupetit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/20 11:38:40 by lupetit           #+#    #+#              #
#    Updated: 2026/01/20 11:38:41 by lupetit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= account

SRCS		= tests.cpp \
			  Account.cpp

OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
