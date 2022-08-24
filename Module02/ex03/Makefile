NAME	=	bsp
CC		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
SRCS	=	main.cpp \
			bsp.cpp \
			Fixed.cpp \
			Point.cpp
OBJS	=	${SRCS:.cpp=.o}

all	:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean	:
	rm -f $(OBJS)

fclean	:	clean
	rm -f $(NAME)

re	:	clean fclean

.PHONY	:	all clean fclean re