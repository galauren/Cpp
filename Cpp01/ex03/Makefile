NAME = Fight

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRCS =	main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OBJS = ${SRCS:%.cpp=%.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -I. $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

it:
	touch $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
