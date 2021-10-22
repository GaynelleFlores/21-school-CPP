NAME = Materia

SRC =	main.cpp\
		AMateria.cpp\
		Character.cpp\
		Ice.cpp\
		Cure.cpp\
		MateriaSource.cpp\


OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	AMateria.hpp\
			Character.hpp\
			Ice.hpp\
			Cure.hpp\
			MateriaSource.hpp\
			IMateriaSource.hpp\

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