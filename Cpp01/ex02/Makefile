NAME = HiThisIsBrain

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp

OBJS = ${SRCS:%.cpp=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: re clean fclean
