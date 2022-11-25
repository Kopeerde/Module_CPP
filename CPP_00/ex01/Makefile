NAME = phonebook
CPP = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98 -gdwarf-4

$(NAME):
	clang++ $(FLAGS) ./headers/utils.hpp ./headers/Contact.hpp ./headers/PhoneBook.hpp ./src/Contact.cpp ./src/PhoneBook.cpp ./src/main.cpp

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean


re: fclean
	make all


.PHONY: all clean fclean re $(NAME)