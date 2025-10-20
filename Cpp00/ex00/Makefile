NAME = megaphone

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -I.

SRCS = megaphone.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(OBJS)
	${CC} ${OBJS} -o ${NAME}

%.o: %.cpp
	${CC} ${FLAGS} -c $^ -o $@

clean:
	rm ${OBJS}

fclean: clean
	rm ${NAME}

re: fclean all

.PHONY: all re clean fclean
