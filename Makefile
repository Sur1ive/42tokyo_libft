SRCS	= $(wildcard ft_*.c)
OBJS	= $(SRCS:.c=.o)
NAME	= libft.a
CC		= cc -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus:

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re