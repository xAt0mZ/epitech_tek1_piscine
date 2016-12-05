##
## Makefile for evalexpr in /home/baron_l//local/rendu/piscine/projets/evalexpr
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Fri Oct 26 10:36:19 2012 louis-philippe baron
## Last update Sun Oct 28 17:44:58 2012 louis-philippe baron
##

SRC=	main.c \
	calculs.c \
	eval_expr.c \
	find_and_do.c

OBJ=	$(SRC:.c=.o)

LIB=		/afs/epitech.net/users/all/baron_l/rendu/lib

NAME=		eval_expr

CFLAGS= 	-lmy -L$(LIB)

CFLAGS+=	-I /afs/epitech.net/users/all/baron_l/rendu/include 

all:	compile

compile:	$(OBJ)
	cc -o $(NAME) $(OBJ) $(CFLAGS) $(CFLAGS+)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)