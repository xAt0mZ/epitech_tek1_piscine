/*
** my_strcpy.c for my_strcpy in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 09:30:05 2012 louis-philippe baron
** Last update Mon Oct  8 10:51:41 2012 louis-philippe baron
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  if (src[i] == '\0')
    dest[i] = '\0';
  return (dest);
}
