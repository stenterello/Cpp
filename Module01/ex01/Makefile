NAME=Moar\ brainz!
CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRCS=main.cpp \
	Zombie.cpp \
	ZombieHorde.cpp
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
