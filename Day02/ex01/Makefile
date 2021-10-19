NAME = fixedPointNumbers

SRC =		main.cpp\
			Fixed.cpp\

HEADERS =	Fixed.hpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++ -std=c++98

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
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