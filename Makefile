NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = (*.c)
OBJS = (SRCS:.c=.o)

all:
	$(NAME)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re:
	fclean all
