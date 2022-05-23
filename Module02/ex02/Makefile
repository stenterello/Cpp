NAME=FixedPointClass
CC=c++
FLAGS=-Wall -Werror -Wextra -g
SRCS=main.cpp \
	Fixed.cpp
OBJS=$(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
