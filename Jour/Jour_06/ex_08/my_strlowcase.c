/*
** my_strlowcase.c for my_strlowcase in /home/baron_l//local/rendu/piscine/Jour_06/ex_08
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 10:55:20 2012 louis-philippe baron
** Last update Tue Oct  9 11:00:51 2012 louis-philippe baron
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 'Z' && str [i] >= 'A')
	str[i] = str[i] + 32;
      i++;
    }
  return (str);
}
