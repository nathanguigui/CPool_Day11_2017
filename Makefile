##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##


SRC	=	*.c

LIB	=	./lib/my

NAME	=	a.out

CFLAGS	=	-W -Wall -Wextra -g

all:
	gcc $(SRC) -L$(LIB) -lmy

clean:
	rm -f $

fclean:
	rm *~

re:	fclean all
