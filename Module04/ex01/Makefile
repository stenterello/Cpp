NAME	=	Animal
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98
SRC		=	Animal.class.cpp \
			Dog.class.cpp \
			Cat.class.cpp \
			Brain.class.cpp \
			main.cpp
OBJ		=	$(SRC:.cpp=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
