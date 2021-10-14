NAME = myPhoneBook

SRC =	main.cpp PhoneBook.cpp Contact.cpp

OBJ = $(patsubst %.cpp, %.o, $(SRC))

CC = clang++

HEADERS =	Contact.hpp\
			PhoneBook.hpp\

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(OBJ) $(NAME)

re: fclean all

.PHONY: clean fclean re all