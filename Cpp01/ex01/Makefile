NAME = MoarBrainz

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	main.cpp \
		Zombie.hpp \
		Zombie.cpp \
		zombieHorde.cpp
OBJS = ${SRCS:%.cpp=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $^ -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all re clean fclean
