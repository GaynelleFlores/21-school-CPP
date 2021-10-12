NAME = Karen

SRC =	main.cpp\
		Karen.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

HEADER = Karen.hpp\

CC = clang++

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all