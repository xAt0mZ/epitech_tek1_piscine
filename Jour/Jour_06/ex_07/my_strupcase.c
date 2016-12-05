/*
** my_strupcase.c for my_strupcase in /home/baron_l//local/rendu/piscine/Jour_06/ex_07
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 10:28:08 2012 louis-philippe baron
** Last update Tue Oct  9 10:54:02 2012 louis-philippe baron
*/

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] <= 'z' && str[i] >= 'a')
	str[i] = str[i] - 32;
      i++;
    }
  return (str);
}
