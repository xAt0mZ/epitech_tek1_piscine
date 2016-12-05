/*
** my_factorielle_it.c for my_factorielle_it in /home/baron_l//local/rendu/piscine/Jour_05
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 10:56:01 2012 louis-philippe baron
** Last update Fri Oct  5 14:46:12 2012 louis-philippe baron
*/

int	my_factorielle_it(int nb)
{
  int n;
  
  n = nb - 1;
  if (nb < 0 || nb > 12)
    return (0);
  if (nb == 0)
    return (1);
  while (n > 0)
    {
      nb = nb * n;
      n--;
    }
  return(nb);
}
