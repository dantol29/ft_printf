CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c ft_print_ptr.c ft_putchar.c ft_strlen.c ft_putstr.c ft_print_unsigned_int.c ft_putnbr.c ft_print_hex.c ft_itoa.c ft_print_number.c ft_strchr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -Rf $(NAME)

re: fclean all

.PHONY: all clean fclean re