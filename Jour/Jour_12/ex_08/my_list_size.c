/*
** my_list_size.c for Jour_12_ex_02 in /home/baron_l//local/rendu/piscine/Jour_12/ex_02
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 23 17:11:02 2012 louis-philippe baron
** Last update Tue Oct 23 17:16:19 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_list_size(t_list *begin)
{
  int		i;
  t_list	*tmp;

  tmp = begin;
  i = 0;
  while (tmp != NULL)
    {
      tmp = tmp->next;
      i++;
    }
  return (i);
}
