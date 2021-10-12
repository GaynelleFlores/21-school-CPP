NAME = ScavTrap

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	ClapTrap.hpp\
			ScavTrap.cpp\


FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all