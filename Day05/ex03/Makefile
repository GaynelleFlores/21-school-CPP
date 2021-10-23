NAME = Bureaucrat

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\


OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS = 	Bureaucrat.hpp\
			Form.hpp\
			ShrubberyCreationForm.hpp\
			RobotomyRequestForm.hpp\
			PresidentialPardonForm.hpp\
			Intern.hpp\

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