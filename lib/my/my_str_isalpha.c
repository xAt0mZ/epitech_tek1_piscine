/*
** my_str_isalpha.c for my_str_isalpha in /home/baron_l//local/rendu/piscine/Jour_06/ex_10
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 13:18:41 2012 louis-philippe baron
** Last update Tue Oct  9 14:07:06 2012 louis-philippe baron
*/

int	my_str_isalpha(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
	return (0);
      i++;
    }
  return (1);
}
