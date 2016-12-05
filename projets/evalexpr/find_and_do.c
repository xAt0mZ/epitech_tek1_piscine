/*
** find_and_do.c for evalexpr.c in /home/baron_l//local/rendu/piscine/projets/evalexpr
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Oct 28 14:28:16 2012 louis-philippe baron
** Last update Sun Oct 28 19:11:16 2012 louis-philippe baron
*/

#include	"evalexpr.h"
#include	"my.h"

int	lenght_num(char *str, int i)
{
  int	i_initial;

  i_initial = i;
  while (str[i] >= '0' && str[i] <= '9' || str[i] == '(' || str[i] == ')')
    i++;
  return (i - i_initial);
}

int	get_nbr_num(char *str)
{
  int	i;
  int	nbr_num;

  i = 0;
  nbr_num = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= '0' && str[i] <= '9' || str[i] == '(' ||
	   str[i] == ')') && !(str[i + 1] >= '0' && str[i + 1] <= '9' ||
			       str[i + 1] == '(' || str[i + 1] == ')'))
	nbr_num++;
      i++;
    }
  return (nbr_num);
}

int	get_nbr_signs(char *str)
{
  int	i;
  int	nbr_signs;

  i = 0;
  nbr_signs = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '+' || str[i] == '-' ||
	  str[i] == '/' || str[i] == '*' || str[i] == '%')
	nbr_signs++;
      i++;
    }
  return (nbr_signs);
}

int	my_sort_wordtab(char **tab, int nbr_words)
{
  int	j;

  j = 0;
  while (j < nbr_words)
    {
      my_putstr(tab[j]);
      j++;
      if (j == nbr_words)
	return (0);
      my_putchar('\n');
    }
  return (0);
}
