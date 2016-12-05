/*
** fuctions.c for My_fuctions in /home/liagre_c//colle/colle_3
** 
** Made by clement liagre
** Login   <liagre_c@epitech.net>
** 
** Started on  Sat Oct 27 18:10:44 2012 clement liagre
** Last update Sun Oct 28 07:46:17 2012 louis-philippe baron
*/

#include "colle3.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	a;
  
  a = 0;
  while (str[a] != 0)
    {
      my_putchar(str[a]);
      a++;
    }
}

int	my_putnbr(int nb)
{
  if (nb > 9)
     my_putnbr(nb / 10);
    my_putchar((nb % 10) + '0');
}

int	my_strlen(char *str)
{
  int	a;
  
  a = 0;
  while (str[a] != 0)
    a++;
  return (a);
}
