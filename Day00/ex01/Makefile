NAME = myPhoneBook

SRC = PhoneBook.cpp

CC = clang++

HEADERS =	Contact.hpp\
			PhoneBook.hpp\

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(SRC) $(HEADERS)
	$(CC) $(FLAGS) $< -o $@

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all