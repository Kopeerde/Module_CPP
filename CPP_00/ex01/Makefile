
#########################
#      DEFINE SRCS      #
#########################

NAME = phonebook

CPP = c++
FLAG = -MMD -Wall -Werror -Wextra -std=c++98 -g3

DIR_HEADERS = headers/
SRC_PATH = src/
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ_PATH	=	obj/
OBJ		=	$(SRC:.cpp=.o)
OBJS	=	$(addprefix $(OBJ_PATH), $(OBJ))

DEP_PATH	=	.dep/
DEP		=	$(SRC:.cpp=.d)
DEPS	=	$(addprefix $(DEP_PATH), $(DEP))

#########################
#        INCLUDES       #
#########################
$(NAME): $(OBJS)
	$(CPP) $(FLAG) $(OBJS) -o $(NAME)

#########################
#       BUILD RULES     #
#########################

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	mkdir -p obj
	$(CPP) $(FLAG) -c $< -o $@ -I $(DIR_HEADERS)

#########################
#       CLEAN RULES     #
#########################

clean:
	rm -rf obj

#########################
#      FCLEAN RULES     #
#########################

fclean:
	rm -f $(NAME)
	rm -rf obj

#######################
#       RE RULES      #
#######################

re: fclean
	make

#######################
#      ALL RULES      #
#######################

all: $(NAME)

.PHONY: all clearn fclean re