NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

all:
	$(NAME)

fclean:
	rm -f $(NAME)

re:
	fclean all
