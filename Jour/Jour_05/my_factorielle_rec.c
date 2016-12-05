/*
** my_factorielle_rec.c for my_factorielle_rec in /home/baron_l//local/rendu/piscine/Jour_05
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 13:30:58 2012 louis-philippe baron
** Last update Fri Oct  5 14:44:45 2012 louis-philippe baron
*/

int	my_factorielle_rec(int nb)
{ 
  if (nb < 0 || nb > 12)
    return (0);
  if (nb == 0)
    return (1);
  if (nb > 0)
    {
      nb = my_factorielle_rec(nb - 1) * nb;
      return(nb);
    }
}
