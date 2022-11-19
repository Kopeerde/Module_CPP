NAME = megaphone
CPP = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = ./src/main.cpp

$(NAME):
	$(CPP) $(FLAGS)

obj/%.o:%.cpp
	$(CPP) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -rf *.o

fclean: clean


re: fclean
	make all


.PHONY: all clean fclean re $(NAME)