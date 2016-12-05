/*
** my_str_islower.c for my_str_islower in /home/baron_l//local/rendu/piscine/Jour_06/ex_12
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 14:21:01 2012 louis-philippe baron
** Last update Wed Oct 17 19:42:50 2012 louis-philippe baron
*/

int	my_str_islower(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'a' && str[i] <= 'z'))
	return (0);
      i++;
    }
  return (1);
}
