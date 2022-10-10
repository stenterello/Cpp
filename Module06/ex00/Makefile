NAME	=	convert
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC		=	main.cpp \
			Converter.class.cpp
OBJS	=	$(SRC:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re