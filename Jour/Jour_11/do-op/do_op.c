/*
** do_op.c for do-op in /home/baron_l//local/rendu/piscine/Jour_11/do-op
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct 22 15:39:35 2012 louis-philippe baron
** Last update Tue Oct 23 13:44:32 2012 louis-philippe baron
*/

int	plus(int nb1, int nb2)
{
  int	result;
  int	max;

  max = 2147483647;
  if ((((double)nb1 / 2) + ((double)nb2 / 2) > ((double)max / 2)) ||
      (((double)nb1 / 2) + ((double)nb2 / 2) < ((double)(-(max + 1)) / 2)))
    return (0);
  else
    result = nb1 + nb2;
  return (result);
}

int	minus(int nb1, int nb2)
{
  int	result;
  int	max;

  max = 2147483647;
  if ((((double)nb1 / 2) + ((double)nb2 / 2) > ((double)max / 2)) ||
      (((double)nb1 / 2) + ((double)nb2 / 2) < ((double)(-(max + 1)) / 2)))
    return (0);
 else
   result = nb1 - nb2;
 return (result);
}

int	time(int nb1, int nb2)
{
  int	result;

    result = nb1 * nb2;
  return (result);
}

int	divide(int nb1, int nb2)
{
  int	result;
  if (nb2 == 0)
    my_putstr("Stop : division by zero\n");
  else
    {
      result = nb1 / nb2;
      return (result);
    }
}

int	modulo(int nb1, int nb2)
{
  int	result;

  if (nb2 == 0)
    my_putstr("Stop : modulo by zero\n");
  else
    {
      result = nb1 % nb2;
      return (result);
    }
}
