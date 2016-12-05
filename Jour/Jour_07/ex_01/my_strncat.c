/*
** my_strncat.c for my_strncat in /home/baron_l//local/rendu/piscine/Jour_07/ex_01
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 16:46:16 2012 louis-philippe baron
** Last update Wed Oct 10 17:03:35 2012 louis-philippe baron
*/

int	my_strlen_01_2(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    i++;
  return(i);
}

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	a;

  i = 0;
  a = my_strlen_01_2(dest);
  while (i < nb)
    {
      dest[i + a] = src[i];
      i++;
    }
  dest[a + i] = '\0';
  return (dest);
}
