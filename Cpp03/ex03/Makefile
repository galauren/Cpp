NAME = DiamondTrap

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

SRCDIR = ../
SRC = $(SRCDIR)ex00/ClapTrap.cpp \
	  $(SRCDIR)ex01/ScavTrap.cpp \
	  $(SRCDIR)ex02/FragTrap.cpp \
	  DiamondTrap.cpp \
	  main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

