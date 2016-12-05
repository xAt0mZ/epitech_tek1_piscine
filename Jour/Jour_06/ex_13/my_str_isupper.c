/*
** my_str_isupper.c for my_str_isupper in /home/baron_l//local/rendu/piscine/Jour_06/ex_13
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 14:34:37 2012 louis-philippe baron
** Last update Tue Oct  9 14:38:21 2012 louis-philippe baron
*/

int	my_str_isupper(char *str)
{
  int	i;

  i = 0;
  if (str[i] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!(str[i] >= 'A' && str[i] <= 'Z'))
	return (0);
      i++;
    }
  return (1);
}
