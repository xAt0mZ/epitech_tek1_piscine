/*
** colle2-1.c for colle2-1 in /home/baron_l//local/rendu/piscine/colles/colle_2/colle_2-1_imposee
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 13 15:08:30 2012 louis-philippe baron
** Last update Sat Oct 13 21:31:11 2012 louis-philippe baron
*/

#include <unistd.h>

void	my_putcharn_left_right(char *str, int nb)
{
  int	i;

  i = my_strlen(str);
  while (nb <= i)
    {
      my_putchar(str[nb]);
      nb++;
    }
}

void	left_right(char *str, int time_1)
{
  int	i;

  i = my_strlen(str);
  while (i >= 0)
    {
      my_putcharn_left_right(str, i);
      my_putchar('\r');
      i--;
      usleep(100000 + time_1);
    }
  my_putchar('\r');
  my_aff_spaces(2 * my_strlen(str));
  my_putchar('\r');
}
