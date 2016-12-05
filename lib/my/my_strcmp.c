/*
** my_strcmp.c for my_strcmp in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 15:07:13 2012 louis-philippe baron
** Last update Tue Oct  9 08:47:08 2012 louis-philippe baron
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
      i++;
    }
  return (0);
}
