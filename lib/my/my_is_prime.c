/*
** my_is_prime.c for my_is_prime in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:47:46 2012 louis-philippe baron
** Last update Wed Oct 17 20:06:09 2012 louis-philippe baron
*/

int	my_is_prime(int nombre)
{
  int	i;

  i = 2;
  if (nombre <= 1)
    return (0);
  if (nombre == 2)
    return (1);
  while (i < nombre / 2)
    {
      if (nombre % i == 0)
	return (0);
      i++;
    }
  return (1);
}
