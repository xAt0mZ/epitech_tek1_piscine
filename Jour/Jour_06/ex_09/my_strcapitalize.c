/*
** my_strcapitalize.c for my_strcapitalize in /home/baron_l//local/rendu/piscine/Jour_06/ex_09
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 11:03:01 2012 louis-philippe baron
** Last update Tue Oct  9 21:43:16 2012 louis-philippe baron
*/

int	my_str_islower_12(char *str)
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

char	*my_strcapitalize(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 1;
  my_str_islower_12(str);
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	{
	  if (j == 1)
	    str[i] = str[i] - 32;
	  j = 0;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	j = 0;
      else 
	j = 1;
      i++;
    }
  return (str);
}
