/*
** compare.c for colle3 in /home/baron_l//local/rendu/piscine/colles/colle_3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 27 21:44:37 2012 louis-philippe baron
** Last update Sun Oct 28 07:43:33 2012 louis-philippe baron
*/

#include "colle3.h"

int	normal_case(char *buffer, int large, int total)
{
  if (buffer[0] == 'o' && buffer[large - 1] == 'o' &&
      buffer[total - large - 1] == 'o' && buffer[total - 2] == 'o')
    return (1);
  if (buffer[0] == '/' && buffer[large - 1] == '\\' &&
      buffer[total - large - 1] == '\\' && buffer[total - 2] == '/')
    return (2);
  if (buffer[0] == 'A' && buffer[large - 1] == 'A' &&
      buffer[total - large - 1] == 'C' && buffer[total - 2] == 'C')
    return (3);
  if (buffer[0] == 'A' && buffer[large - 1] == 'C' &&
      buffer[total - large - 1] == 'A' && buffer[total - 2] == 'C')
    return (4);
  if (buffer[0] == 'A' && buffer[large - 1] == 'C' &&
      buffer[total - large - 1] == 'C' && buffer[total - 2] == 'A')
    return (5);
  else
    return (0);
}

int	particular_case(char *buffer)
{
  if (buffer[0] == 'o')
    return (1);
  else if (buffer[0] == '*')
    return (2);
  else if (buffer[0] == 'B')
    return (6);
  else
    return (0);
}

int	select_response(int colle, int l, int h)
{
  if (colle == 0)
    false_glue();
  else if (colle != 0 && colle != 6)
    last_line(colle, l, h);
  else if (colle == 6)
    last_line_mult(3, l, h);
  return (0);
}
