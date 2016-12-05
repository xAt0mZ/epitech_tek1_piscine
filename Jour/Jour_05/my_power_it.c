/*
** my_power_it.c for my_power_it in /home/baron_l//local/rendu/piscine/Jour_05
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 14:47:47 2012 louis-philippe baron
** Last update Thu Oct 11 15:23:42 2012 louis-philippe baron
*/

int	my_power_it(int nb, int power)
{
  int	c;
  int	N;

  c = 1;
  N = 1;
  if (nb <= 0 || power < 0)
    return (0);
  if (power == 0)
    return (1);
  while (nb > 0 && c <= power)
    {
      N = N * nb;
      c++;
    }
  return(N);
}
