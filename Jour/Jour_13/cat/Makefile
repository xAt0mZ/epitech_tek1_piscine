##
## Makefile for cat in /home/baron_l//local/rendu/piscine/Jour_13
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Thu Oct 25 10:55:11 2012 louis-philippe baron
## Last update Thu Oct 25 14:56:08 2012 louis-philippe baron
##

SRC=	main.c \
	cat_file.c \
	cat_no_file.c \
	error.c

OBJ=	$(SRC:.c=.o)

NAME=	cat

all:	$(OBJ) compile

compile:
	cc -o $(NAME) $(OBJ) -lmy -L /afs/epitech.net/users/all/baron_l/rendu/lib

clean:
	@rm -f $(OBJ)