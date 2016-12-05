/*
** my_getnbr.c for my_getnbr in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:44:53 2012 louis-philippe baron
** Last update Tue Oct 23 13:29:30 2012 louis-philippe baron
*/

int	my_getnbr(char *str)
{
  int	i;
  long	a;
  int	sign;

  i = 0;
  a = 0;
  sign = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign = sign * (-1);
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      a = a * 10 + (str[i] - 48);
      if (a * sign > 2147483647 || a * sign < -2147483648)
	return (0);
      i++;
    }
  return (a * sign);
}
