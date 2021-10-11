NAME = Zombie

SRC =	Zombie.cpp\
		ZombieHorde.cpp\
		main.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADER = Zombie.hpp

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all