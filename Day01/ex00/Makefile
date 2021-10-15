NAME = Zombie

SRC =	Zombie.cpp\
		newZombie.cpp\
		RandomChump.cpp\
		main.cpp\

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++ -std=c++98

HEADER = Zombie.hpp

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(OBJ) $(NAME)

all: $(NAME)

re: fclean all

.PHONY: clean fclean re all