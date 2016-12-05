/*
** my_find_elm_eq_in_list.c for Jour_12_ex_06 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 17:01:48 2012 louis-philippe baron
** Last update Wed Oct 24 17:24:53 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

void		*my_find_elm_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  t_list	*tmp;
  int		i;

  tmp = begin;
  while (tmp != NULL)
    {
      i = cmp(tmp->data, data_ref);
      if (i == 0)
	return (tmp->data);
      tmp = tmp->next;
    }
  return (NULL);
}
