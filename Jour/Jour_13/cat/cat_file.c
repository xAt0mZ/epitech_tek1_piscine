/*
** cat_file.c for cat in /home/baron_l//local/rendu/piscine/Jour_13
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct 25 11:46:16 2012 louis-philippe baron
** Last update Thu Oct 25 14:37:38 2012 louis-philippe baron
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "cat.h"

int	cat_file(int ac, char *av)
{
  int	fd;
  int	ret;
  char	buffer[5];

  fd = open(av, O_RDONLY);
  if (fd == -1)
    {
      error(av, errno);
      return (1);
    }
  ret = 1;
  while (ret > 0)
    {
      ret = read(fd, buffer, 4);
      if (ret == -1)
	{
	  is_dir(av);
	  return (0);
	}
      else if (ret == 0)
	return (0);
      buffer[ret] = '\0';
      my_putstr(buffer);
    }
  close(fd);
  return (0);
}
