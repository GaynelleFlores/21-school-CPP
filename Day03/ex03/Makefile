NAME = DiamondTrap

SRC =	main.cpp\
		FragTrap.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		DiamondTrap.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	ClapTrap.hpp\
			FragTrap.hpp\
			ScavTrap.hpp\
			DiamondTrap.hpp\

FLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean re all