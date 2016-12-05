/*
** test.c for my_swap in /home/baron_l//local/rendu/piscine/Jour_04
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 11:01:05 2012 louis-philippe baron
** Last update Wed Oct 10 11:44:07 2012 louis-philippe baron
*/

int	my_swap(int *a, int *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}
