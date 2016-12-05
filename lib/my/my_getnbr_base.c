/*
** my_getnbr_base.c for my_getnbr_base in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 17 16:33:29 2012 louis-philippe baron
** Last update Tue Nov 13 10:13:28 2012 louis-philippe baron
*/

int	power_base(int nb, int power)
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

int	my_getnbr_base(char *str, char *base)
{
  int	i;
  int	result;
  int	b;
  int	counter;

  i = my_strlen(str) - 1;
  result = 0;
  b = 0;
  while (i >= 0)
    {
      counter = 0;
      while (str[i] != base[counter])
	  counter++;
      result = result + (power_base(my_strlen(base), b) * counter);
      b++;
      i--;
      if (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	    result = result * (-1);
	  i--;
	}
    }
  return (result);
}
