NAME = ClapTrap

SRC =	main.cpp\
		ClapTrap.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	ClapTrap.hpp\

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all