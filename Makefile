SRCS	= ft_isdigit.c ft_memset.c ft_striteri.c ft_strrchr.c\
		ft_isprint.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c\
		ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strlcat.c ft_substr.c\
		ft_bzero.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c\
		ft_calloc.c  ft_memchr.c ft_putstr_fd.c ft_strlen.c ft_toupper.c\
		ft_isalnum.c ft_memcmp.c ft_split.c ft_strmapi.c\
		ft_isalpha.c ft_memcpy.c ft_strchr.c ft_strncmp.c\
		ft_isascii.c  ft_memmove.c ft_strdup.c ft_strnstr.c
SRCS_B	= ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c\
		ft_lstadd_back_bonus.c ft_lstsize_bonus.c ft_lstadd_front_bonus.c\
		ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c
OBJS	= $(SRCS:.c=.o)
OBJS_B	= $(SRCS_B:.c=.o)
NAME	= libft.a
CC		= gcc -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS_B)
	ar rc $(NAME) $(OBJS_B)

clean:
	rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
