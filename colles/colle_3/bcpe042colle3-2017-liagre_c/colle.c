/*
** colle.c for colle3 in /home/baron_l//local/rendu/piscine/colles/colle_3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 27 19:07:20 2012 louis-philippe baron
** Last update Sun Oct 28 07:43:50 2012 louis-philippe baron
*/

#include <unistd.h>
#include "colle3.h"

int	calc_height(char *buffer)
{
  int	i;
  int	height;

  i = 0;
  height = 0;
  while (buffer[i] != '\0')
    {
      while (buffer[i] != '\0')
	{
	  if (buffer[i] == '\n')
	    height++;
	  i++;
	}
    }
  return (height);
}

int	calc_large(int total, int height)
{
  int	large;

  large = (total - height) / height;
  return (large);
}

int	what_is_this_glue(char *buffer)
{
  int	large;
  int	height;
  int	total;
  int	colle;

  total = my_strlen(buffer);
  height = calc_height(buffer);
  large = calc_large(total, height);
  if (large != 1 && height != 1)
    colle = normal_case(buffer, large, total);
  else
    colle = particular_case(buffer);
  select_response(colle, large, height);
  return (0);
}

int	main(int ac, char **av)
{
  char	buff[4096 + 1];
  int	len;

  len = 1;
  sleep(1);
  while (len > 0)
    {
      len = read(0, buff, 4096);
      if (len != 0)
	{
	  buff[len] = '\0';
	  what_is_this_glue(buff);
	}
    }
  return (0);
}
