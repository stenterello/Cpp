NAME=FragTrap
CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRCS=ClapTrap.cpp \
	ScavTrap.cpp \
	FragTrap.cpp \
	main.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
