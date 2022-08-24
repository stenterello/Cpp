NAME=megaphone
CC=c++
FLAGS=-Wall -Werror -Wextra -std=c++98
SRC=megaphone.cpp
OBJS=$(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
