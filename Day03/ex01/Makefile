NAME = ScavTrap

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	ClapTrap.hpp\
			ScavTrap.hpp\

FLAGS = -Wall -Wextra -Werror

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