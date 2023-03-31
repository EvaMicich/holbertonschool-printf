CC = 	gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
RM = rm -rf
SRC = main.c printf.c print_char.c print_int.c print_percent.c print_str.c _putchar.c _strlen.c valid_specifier.c
NAME = printf

all: 	1

1:
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:	$(RM) *~ $(NAME)

oclean:	$(RM) $(OBJ)

fclean: clean oclean

re: 	fclean all
