/*
** my_put_in_list.c for Jour_12 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 23 14:30:38 2012 louis-philippe baron
** Last update Wed Oct 24 12:13:51 2012 louis-philippe baron
*/

#include <stdlib.h>
#include "mylist.h"

int		my_put_in_list(t_list **list, void *data)
{
  t_list	*elem;

  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->data = data;
  elem->next = *list;
  *list = elem;
}
