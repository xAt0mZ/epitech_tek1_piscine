/*
** cat_no_file.c for cat in /home/baron_l//local/rendu/piscine/Jour_13
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct 25 11:52:45 2012 louis-philippe baron
** Last update Fri Oct 26 12:38:14 2012 louis-philippe baron
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "cat.h"

int	cat_no_file()
{
  int	i;
  int	ret;
  char	buffer[5];

  i = 0;
  while (1)
    {
      while (ret > 0)
	{
	  ret = read(0, buffer, 4);
	  if (ret == 0)
	    {
	      while (i <= 4)
		{
		  buffer[i] = '\0';
		  i++;
		}
	    }
	  else
	    {
	      buffer[ret] = '\0';
	      my_putstr(buffer);
	    }
	}
    }
}
