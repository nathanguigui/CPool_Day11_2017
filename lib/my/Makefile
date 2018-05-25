##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

DEST = libmy.a

SRC	=	*.c

SRCO	=	*.o

all:
	gcc -c $(SRC)
	ar rc $(DEST) $(SRCO)

clean:
	rm $(SRCO)

fclean:
	rm $(SRCO)
	rm $(DEST)

re:	fclean all
