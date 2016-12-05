/*
** my_rev_list.c for Jour_12_ex_03 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 23 18:03:30 2012 louis-philippe baron
** Last update Fri Nov  2 10:29:48 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_rev_list(t_list **begin)
{
  t_list	*tmp;
  t_list	*current;
  t_list	*link;
  int		size;
  int		i;

  i = 1;
  size = my_list_size(*begin);
  tmp = *begin;
  while (i <= size)
    {
      link = tmp->next;
      if (i == 1)
	tmp->next = NULL;
      else
	tmp->next = current;
      current = tmp;
      if (i == size)
	*begin = current;
      tmp = link;
      i++;
    }
}
