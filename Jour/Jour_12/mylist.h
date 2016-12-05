/*
** mylist.h for Jour_12 in /home/baron_l//local/rendu/piscine/Jour_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 23 14:26:39 2012 louis-philippe baron
** Last update Wed Oct 24 17:10:03 2012 louis-philippe baron
*/

#ifndef MYLIST_H_
#define MYLIST_H_

typedef struct	s_list
{
  void	*data;
  struct s_list *next;
} t_list;

t_list 	*my_params_in_list(int, char **);
int	my_list_size(t_list *);
int	my__rev_list(t_list **);
int	swap_rev_list(t_list *, t_list *, t_list *, t_list **);
int	my_apply_on_list(t_list *, int (*)(void *));
int	my_apply_on_eq_in_list(t_list *, int (*)(), void *, int (*)());
void	*my_fin_elm_eq_in_list(t_list *, void *, int (*)());

#endif
