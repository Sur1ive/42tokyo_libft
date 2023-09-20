SRCS	= ft_*.c
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
CC		= cc
CFLAG	= -Wall -Wextra -Werror -c

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re