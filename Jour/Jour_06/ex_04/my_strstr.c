/*
** my_strstr.c for my_strstr in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 13:29:44 2012 louis-philippe baron
** Last update Thu Oct 11 19:46:54 2012 louis-philippe baron
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i_str;
  int	i_to_find;

  i_str = 0;
  i_to_find = 0;
  while (str[i_str] != '\0')
    {
      while (str[i_str] != '\0' && str[i_str] == to_find[i_to_find])
	{
	  if (to_find[i_to_find + 1] == '\0')
	    return (&(str[i_str - i_to_find]));
	  i_to_find++;
	  i_str++;
	  if (str[i_str] == '\0')
	    return(0);
	}
      if (i_to_find != 0)
	i_str--;
      i_to_find = 0;
      i_str++;
    }
}
