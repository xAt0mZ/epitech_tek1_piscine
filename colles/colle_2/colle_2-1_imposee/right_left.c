/*
** colle2-1.c for colle1-2 in /home/dauvis_a//loc/piscine/colles/Semaine_02
** 
** Made by adrien dauvister
** Login   <dauvis_a@epitech.net>
** 
** Started on  Sat Oct 13 15:07:35 2012 adrien dauvister
** Last update Sat Oct 13 21:38:10 2012 louis-philippe baron
*/

#include <unistd.h>

void	my_putcharn_right_left(char *str, int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      my_putchar(str[i]);
      i++;
    }
}

void	right_left(char *str, int time_2)
{
  int	i;
  int	j;

  j = my_strlen(str) + 1;
  i = 0;
  while (j != 0)
    {
      usleep(100000 + time_2);
      my_aff_spaces(j - 2);
      my_putcharn_right_left(str, i);
      my_putchar('\r');
      j--;
      i++;
    }
  if (j == 0)
    {
      my_putchar(str[i]);
      j = my_strlen(str);
      i = 0;
    }
  my_putchar('\r');
  my_aff_spaces(2 * my_strlen(str));
  my_putchar('\r');
}
