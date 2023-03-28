CC=	gcc
CFLAGS=	-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
RM=	rm -rf
BETTY=	betty

SRC=	*.c
OBJ=	$(SRC:.c=.o)
NAME=	printf

all:	$(OBJ)
	$(BETTY) $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:	$(RM) *~ \#*\# \.\#* \
	$(NAME)

fclean:	clean
	$(RM) $(OBJ)

re:	fclean all
