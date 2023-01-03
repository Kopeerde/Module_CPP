

NAME = fixed
FLAGS = -Wall -Wextra -Werror -gdwarf-4 -std=c++98

$(NAME):
	c++ $(FLAGS) ./headers/*.hpp ./src/*.cpp


all: $(NAME)


clean:
	rm -rf *.o

fclean: clean
	rm -rf a.out

re: fclean
	make all

.PHONY: $(NAME) all clean fclean re








