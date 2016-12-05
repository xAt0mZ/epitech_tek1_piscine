/*
** my_power_rec.c for my_power_rec in /home/baron_l//local/rendu/piscine/Jour_05
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 16:29:16 2012 louis-philippe baron
** Last update Thu Oct 18 12:48:57 2012 louis-philippe baron
*/

int	my_power_rec(int nb, int power)
{
  if (nb <= 0 || power < 0)
    return (0);
  if (power == 0)
    return (1);
  if (nb > 0 && power >= 0)
    {
      nb = nb * (my_power_rec(nb, power - 1));
      return (nb);
    }
}
