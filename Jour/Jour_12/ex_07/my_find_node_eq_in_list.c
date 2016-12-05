/*
** my_find_node_eq_in_list.c for Jour_12_ex_07 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 17:54:33 2012 louis-philippe baron
** Last update Wed Oct 24 18:29:18 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

t_list		*my_find_node_eq_in_list(t_list *begin, void *data_ref, int (*cmp)())
{
  t_list	*tmp;
  int		i;

  tmp = begin;
  while (tmp != NULL)
    {
      i = cmp(tmp->data, data_ref);
      if (i == 0)
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
