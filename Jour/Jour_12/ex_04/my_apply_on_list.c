/*
** my_apply_on_list.c for Jour_12_ex_04 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 14:58:37 2012 louis-philippe baron
** Last update Wed Oct 24 15:19:45 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_apply_on_list(t_list *begin, int (*f)(void*))
{
  t_list	*tmp;

  tmp = begin;
  while (tmp != NULL)
    {
      f(tmp->data);
      tmp = tmp->next;
    }
}
