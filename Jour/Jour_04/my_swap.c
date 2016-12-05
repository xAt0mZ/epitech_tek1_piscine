/*
** test.c for my_swap in /home/baron_l//local/rendu/piscine/Jour_04
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 11:01:05 2012 louis-philippe baron
** Last update Thu Oct  4 21:08:31 2012 louis-philippe baron
*/

int	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
