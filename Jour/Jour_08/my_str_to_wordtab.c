/*
** my_str_to_wordtab.c for Jour_08 in /home/baron_l//local/rendu/piscine/Jour/Jour_08
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 26 10:51:37 2012 louis-philippe baron
** Last update Fri Oct 26 18:02:47 2012 louis-philippe baron
*/

#include <stdlib.h>

int	count_word(char *str, int i)
{
  while ((str[i] >= 'A' && str[i] <= 'Z') ||
	 (str[i] >= 'a' && str[i] <= 'z') ||
	 (str[i] >= '0' && str[i] <= '9'))
    i++;
  return (i + 1);
}

int	from_word_to_word(char *str, int i)
{
  while (!((str[i] >= 'A' && str[i] <= 'Z') ||
	   (str[i] >= 'a' && str[i] <= 'z') ||
	   (str[i] >= '0' && str[i] <= '9')))
    i++;
  return (i);
}

int	count_spe_char(char *str)
{
  int	i;
  int	c_c;

  i = 0;
  c_c = 0;
  while (str[i] != '\0')
    {
      if (!((str[i] >= 'A' && str[i] <= 'Z') ||
	    (str[i] >= 'a' && str[i] <= 'z') ||
	    (str[i] >= '0' && str[i] <= '9')) &&
	  ((str[i + 1] >= 'A' && str[i + 1] <= 'Z') ||
	   (str[i + 1] >= 'a' && str[i + 1] <= 'z') ||
	   (str[i + 1] >= '0' && str[i + 1] <= '9')))
	c_c++;
      i++;
    }
  return (c_c + 1);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	tab_nbr;
  int	i_cpy;

  i = 0;
  tab_nbr = 0;
  tab = malloc(count_spe_char(str) * sizeof(char *));
  if (tab == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      tab[tab_nbr] = malloc((count_word(str, i) - i) * sizeof(char));
      if (tab[tab_nbr] == NULL)
	return (NULL);
      i_cpy = 0;
      while (i != count_word(str, i))
	{
	  tab[tab_nbr][i_cpy] = str[i];
	  i++;
	  i_cpy++;
	}
      tab[tab_nbr][count_word(str, i)] = '\0';
      tab_nbr++;
    }
  return (tab);
}

int	main()
{
  char	**tab;

  tab = my_str_to_wordtab("je fais un test");
  my_putstr(tab[0]);
}
