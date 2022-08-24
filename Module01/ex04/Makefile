NAME	=	Sed\ is\ for\ losers
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
SRCS	=	main.cpp \
			Sed.cpp
OBJS	=	$(SRCS:.cpp=.o)

$(NAME)	:	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

all		:	$(NAME)

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re
