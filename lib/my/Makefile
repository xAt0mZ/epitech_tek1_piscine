##
## Makefile for Makefile in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
## 
## Made by louis-philippe baron
## Login   <baron_l@epitech.net>
## 
## Started on  Mon Oct 22 11:06:23 2012 louis-philippe baron
## Last update Tue Dec 18 11:39:04 2012 louis-philippe baron
##

SRC=	convert_base.c \
	my_find_prime_sup.c \
	my_getnbr_base.c \
	my_getnbr.c \
	my_isneg.c \
	my_is_prime.c \
	my_power_rec.c \
	my_putchar.c \
	my_putnbr_base.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_showmem.c \
	my_showstr.c \
	my_sort_int_tab.c \
	my_square_root.c \
	my_strcapitalize.c \
	my_strcat.c \
	my_strcmp.c \
	my_strcpy.c \
	my_str_isalpha.c \
	my_str_islower.c \
	my_str_isnum.c \
	my_str_isprintable.c \
	my_str_isupper.c \
	my_strlcat.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncat.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_strupcase.c \
	my_swap.c

OBJ=	$(SRC:.c=.o)

NAME=	libmy.a

all:	lib cplib cpmyheader

lib:	$(OBJ)
	ar rc $(NAME) $(OBJ)

cplib:
	cp libmy.a /afs/epitech.net/users/all/baron_l/rendu/lib

cpmyheader:
	cp my.h /afs/epitech.net/users/all/baron_l/rendu/include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	clean
