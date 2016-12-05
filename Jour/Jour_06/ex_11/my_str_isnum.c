/*
** my_str_isnum.c for my_str_isnum in /home/baron_l//local/rendu/piscine/Jour_06/ex_11
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 13:47:24 2012 louis-philippe baron
** Last update Tue Oct  9 14:05:37 2012 louis-philippe baron
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  if ( str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (0);
      i++;
    }
  return (1);
}
