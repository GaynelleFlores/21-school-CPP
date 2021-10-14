NAME = myJob

SRC =	Account.cpp tests.cpp

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS =	Account.hpp\

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all