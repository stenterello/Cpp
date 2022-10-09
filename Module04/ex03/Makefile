NAME	=	Interfaces
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98 -g -Wno-shadow -Wshadow
SRC		=	AMateria.class.cpp \
			Character.class.cpp \
			Cure.class.cpp \
			Ice.class.cpp \
			MateriaSource.class.cpp \
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
