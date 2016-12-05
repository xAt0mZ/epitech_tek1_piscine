/*
** my_strcat.c for my_strcat in /home/baron_l//local/rendu/piscine/Jour_07/ex_01
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 15:51:33 2012 louis-philippe baron
** Last update Wed Oct 10 16:44:59 2012 louis-philippe baron
*/

int	my_strlen_01_1(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	a;

  i = 0;
  a = my_strlen_01_1(dest);
  while (src[i] != '\0')
    {
      dest[i + a] = src[i];
      i++;
    }
  if (src[i] == '\0')
    dest[i + a] == '\0';
  return (dest);
}
