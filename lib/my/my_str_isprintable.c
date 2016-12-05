/*
** my_str_isprintable.c for my_str_isprintable in /home/baron_l//local/rendu/piscine/Jour_06/ex_14
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 14:39:40 2012 louis-philippe baron
** Last update Tue Oct  9 14:47:23 2012 louis-philippe baron
*/

int	my_str_isprintable(char *str)
{
  int	i;

  i = 0;
  if (str[0] == '\0')
    return (1);
  while (str[i] != '\0')
    {
      if (!(str[i] >= 32 && str[i] <= 126))
	return(0);
      i++;
    }
  return (1);
}
