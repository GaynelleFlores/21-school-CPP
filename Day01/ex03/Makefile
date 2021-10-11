NAME = violence

SRC =	main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp\

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all