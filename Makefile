NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

HEADER = ft_printf.h

SRCS =	ft_print_decimal.c ft_print_pointer.c ft_print_unsigned.c ft_strlen.c \
		ft_printf.c ft_print_string.c ft_putnbr_hex.c ft_print_char.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean
