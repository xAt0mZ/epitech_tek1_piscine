/*
** my_show_list.c for Jour_12 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 24 12:07:41 2012 louis-philippe baron
** Last update Wed Oct 24 12:13:49 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}
