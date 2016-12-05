/*
** my_rm_all_eq_from_list.c for Jour_12_ex_08 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 18:49:58 2012 louis-philippe baron
** Last update Wed Oct 24 20:28:22 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_rm_all_eq_from_list(t_list **begin, void *data_ref, int (*cmp)())
{
  t_list	*tmp;
  t_list	**link;
  int		i;
  int		size;
  int		value;

  i = 1;
  size = my_list_size(*begin);
  tmp = *begin;
  while (i < size)
    {
      value = cmp(tmp->data, data_ref);
      my_put_nbr(value);
      my_putstr(" = value\n");
      if (value == 0)
	{
	  if (i == 1)
	    {
	      my_putstr("je suis dans le if\n");
	      *begin = tmp->next;
	    }
	  else
	    *link = tmp->next;
	}
      link = &tmp->next;
      tmp = tmp->next;
      i++;
    }
}
