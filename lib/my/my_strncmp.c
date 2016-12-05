/*
** my_strncmp.c for my_strncmp in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 20:21:18 2012 louis-philippe baron
** Last update Mon Oct  8 21:03:41 2012 louis-philippe baron
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  if (n > 0)
    {
      while (i < n)
	{
	  while(s1[i] != '\0' || s2[i] != '\0')
	    {
	      if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	      i++;
	    }
	  return (0);
	}
    }
  else
    return (-1);
}
