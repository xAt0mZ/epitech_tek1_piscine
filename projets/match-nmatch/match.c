/*
** match.c for match-nmatch_match in /home/baron_l//local/rendu/piscine/match-nmatch
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct 11 19:21:21 2012 louis-philippe baron
** Last update Sun Oct 14 21:05:28 2012 louis-philippe baron
*/

int	check(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] != '\0')
    i++;
  while (s2[j] != '\0')
    {
      if (s2[j] == '*')
	return (2);
      j++;
    }
  if (i == j)
    return (2);
  else
      return (0);
}

int	match(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  if (check(s1, s2) == 0)
    return (0);
  if (s2[0] == '*')
    j++;
  while (s1[i] != '\0')
    {
      while(s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
	  i++;
	  j++;
	  if(s2[j] == '*')
	    j++;
	}
      i++;
    }
  if ((s1[i] == '\0' && s2[j] == '\0' && s2[j - 1] == '*')
      || (s1[i] == '\0' && s2[j] == '\0' && s1[i - 1] == s2[j - 1]))
    return (1);
  else
    return (0);
}

int	main()
{
  char s1[] = "strstrstr";
  char s2[] = "strstrstr";

  match(s1, s2);
}
