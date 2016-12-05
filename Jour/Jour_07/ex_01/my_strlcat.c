/*
** my_strlcat.c for my_strlcat in /home/baron_l//local/rendu/piscine/Jour_07/ex_01
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 18:03:21 2012 louis-philippe baron
** Last update Wed Oct 10 19:58:25 2012 louis-philippe baron
*/

int	my_strlen_01_3(char *str)
{
  int	i;
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_strlcat(char *dest, char *src, int size)
{
  int	a;

  if (size < my_strlen_01_3(src))
    a = my_strlen_01_3(src) + size;
  else
    a = my_strlen_01_3(src) + my_strlen_01_3(dest);
  return (a);
}
