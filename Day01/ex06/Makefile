NAME = Karen

SRC =	main.cpp\
		Karen.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

HEADER = Karen.hpp\

CC = clang++ -std=c++98

FLAGS = -Wall -Wextra -Werror

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean re all