/*
** my_square_root.c for my_square_root in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:47:02 2012 louis-philippe baron
** Last update Thu Oct 11 15:41:57 2012 louis-philippe baron
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      if (i * i == nb)
	return (i);
      i++;
    }
  return (0);
}
