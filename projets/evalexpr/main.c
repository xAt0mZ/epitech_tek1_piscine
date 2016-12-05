/*
** main.c for evalexpr in /home/baron_l//local/rendu/piscine/projets/evalexpr
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 26 10:34:57 2012 louis-philippe baron
** Last update Sun Oct 28 17:56:36 2012 louis-philippe baron
*/

#include "evalexpr.h"
#include "my.h"

int	main(int ac, char **av)
{
  if (ac > 1)
    {
      eval_expr(av[1]);
      my_putchar('\n');
    }
  return (0);
}
