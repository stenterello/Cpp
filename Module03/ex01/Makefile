NAME=ScavTrap
CC=c++
FLAGS=-Wall -Werror -Wextra
SRCS=ClapTrap.cpp \
	ScavTrap.cpp \
	main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
