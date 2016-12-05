/*
** error.c for cat in /home/baron_l//local/rendu/piscine/Jour_13
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct 25 14:03:40 2012 louis-philippe baron
** Last update Thu Oct 25 14:37:40 2012 louis-philippe baron
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include "cat.h"

int	error(char *av)
{
  if (errno == EACCES)
    perm_denied(av);
  else
    no_file(av);
}

int	no_file(char *av)
{
  my_putstr("cat: ");
  my_putstr(av);
  my_putstr(": No such file or directory");
  return (0);
}

int	perm_denied(char *av)
{
  my_putstr("cat: ");
  my_putstr(av);
  my_putstr(": Permission denied");
  return (0);
}

int	is_dir(char *av)
{
  my_putstr("cat: ");
  my_putstr(av);
  my_putstr(": Is a directory");
  return (0);
}
