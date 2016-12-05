/*
** my_apply_on_eq_in_list.c for Jour_12_ex_05 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 15:52:04 2012 louis-philippe baron
** Last update Wed Oct 24 16:29:18 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_apply_on_eq_in_list(t_list *begin, int (*f)(), void *data_ref, int (*cmp)())
{
  t_list	*tmp;
  int	i;

  tmp = begin;
  while (tmp != NULL)
    {
      i = cmp(tmp->data, data_ref);
      if (i  == 0)
	f(tmp->data);
      tmp = tmp->next;
    }
}
