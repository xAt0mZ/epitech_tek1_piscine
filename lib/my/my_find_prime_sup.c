/*
** my_find_prime_sup.c for my_find_prime_sup in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:48:32 2012 louis-philippe baron
** Last update Wed Oct 17 14:59:40 2012 louis-philippe baron
*/

int	prime(int nb)
{
  int	i;

  i = 2;
  if (nb <= 1)
    return (0);
  if (nb == 2)
    return (1);
  while (i < nb)
    {
      if (nb % i == 0)
	return (0);
      i++;
    }
  return (1);
}

int	my_find_prime_sup(int nb)
{
  while (prime(nb) != 1)
    nb++;
  return (nb);
}
