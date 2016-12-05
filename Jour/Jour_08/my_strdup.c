/*
** my_strdup.c for my_strdup in /home/baron_l//local/rendu/piscine/Jour_08
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 14:59:31 2012 louis-philippe baron
** Last update Thu Oct 11 11:25:29 2012 louis-philippe baron
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*str;

  str = malloc(my_strlen(src) * sizeof (*str));
  if (str == NULL)
    return (NULL);
  my_strcpy(str, src);
}
