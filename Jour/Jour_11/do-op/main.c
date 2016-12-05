/*
** main.c for do-op in /home/baron_l//local/rendu/piscine/Jour_11/do-op
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct 22 15:12:02 2012 louis-philippe baron
** Last update Tue Oct 23 13:52:16 2012 louis-philippe baron
*/

#include "doop.h"
#include "my.h"

int	get_operand(char *av)
{
  int	i;
  char	operand[5];

  i = 0;
  operand[0] = '+';
  operand[1] = '-';
  operand[2] = '*';
  operand[3] = '/';
  operand[4] = '%';
  while (av[0] != operand[i] && i < 5)
    i++;
  return (i);
}

int	main(int ac, char **av)
{
  int	i;
  int	(*fptr[5])(int, int);

  i =  get_operand(av[2]);
  fptr[0] = &plus;
  fptr[1] = &minus;
  fptr[2] = &time;
  fptr[3] = &divide;
  fptr[4] = &modulo;
  if (ac == 4 && i < 5)
    {
      my_put_nbr(fptr[i](my_getnbr(av[1]), my_getnbr(av[3])));
      my_putchar('\n');
    }
  if (ac == 4 && i == 5)
      my_putstr("0\n");
  else
    return (0);
}
