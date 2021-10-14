NAME = megaphone

SRC = megaphone.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

$(NAME):	$(SRC)
	$(CC) $(FLAGS) $< -o $@

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all