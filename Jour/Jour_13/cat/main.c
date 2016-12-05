/*
** main.c for cat in /home/baron_l//local/rendu/piscine/Jour_13
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct 25 10:59:59 2012 louis-philippe baron
** Last update Fri Oct 26 12:43:59 2012 louis-philippe baron
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "cat.h"

int	main(int ac, char **av)
{
  int	i;

  i = 1;
  if (ac == 1)
    cat_no_file();
  while (i != ac)
    {
      cat_file(ac, av[i]);
      my_putchar('\n');
      i++;
    }
  return (0);
}
