NAME=PhoneBook
CC=c++
FLAGS=-Wall -Werror -Wextra -g
SRC=Contact.cpp \
	PhoneBook.cpp \
	main.cpp
OBJS=$(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
