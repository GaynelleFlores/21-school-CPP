NAME = replace

SRC =	replace.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++ -std=c++98

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean re all