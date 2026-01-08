NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
	$(NAME)

clean:
	rm -f ${OBJS}

fclean:
	rm -f $(NAME)

re:
	fclean all
