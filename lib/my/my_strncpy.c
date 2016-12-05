/*
** my_strncpy.c for strncpy in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 10:52:52 2012 louis-philippe baron
** Last update Wed Oct 10 11:42:00 2012 louis-philippe baron
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i++;
    }
  if (src[i] == '\0')
    dest[i] = '\0';
  return (dest);
}
