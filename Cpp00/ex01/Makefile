NAME = grabPhone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -I.

SRCS =	phoneBook.cpp \
		contact.cpp

OBJS = ${SRCS:.cpp=.o}

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
