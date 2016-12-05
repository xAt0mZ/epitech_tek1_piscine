/*
** eval_expr.c for evalexpr in /home/baron_l//local/rendu/piscine/projets/evalexpr
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 26 11:40:19 2012 louis-philippe baron
** Last update Sun Oct 28 19:17:26 2012 louis-philippe baron
*/

#include	"evalexpr.h"
#include	<stdlib.h>
#include	"my.h"

char	**get_nbr_from_str(char *str, int nbr_num, int i, int k_nbr)
{
  char	**nbr;
  int	i_nbr;

  nbr = malloc(nbr_num * sizeof(char *));
  if (nbr == NULL)
    return (NULL);
  while (k_nbr < nbr_num)
    {
      i_nbr = 0;
      nbr[k_nbr] = malloc((lenght_num(str, i) + 1) * sizeof (char));
      if (nbr[k_nbr] == NULL)
	return (NULL);
      while (str[i] >= '0' && str[i] <= '9' || str[i] == '(' || str[i] == ')')
	{
	  nbr[k_nbr][i_nbr] = str[i];
	  i_nbr++;
	  i++;
	}
      nbr[k_nbr][i_nbr] = '\0';
      while (!(str[i] >= '0' && str[i] <= '9' || str[i] == '(' || str[i] == ')'))
	i++;
      k_nbr++;
    }
  return (nbr);
}

char	*get_operands_from_str(char *str, int nbr_signs)
{
  int	i;
  char	*signs;
  int	i_signs;

  i = 0;
  i_signs = 0;
  signs = malloc(nbr_signs * sizeof(char));
  while (str[i] != '\0')
    {
      if (str[i] == '+' || str[i] == '-' ||
	  str[i] == '/' || str[i] == '*' || str[i] == '%')
	{
	  signs[i_signs] = str[i];
	  i_signs++;
	}
      i++;
    }
  return (signs);
}

int	eval_expr(char *str)
{
  char	**nbr;
  char	*signs;
  int	nbr_num;
  int	i;
  int	nbr_signs;


  i = 0;
  nbr_signs = get_nbr_signs(str);
  nbr_num = get_nbr_num(str);
  nbr = get_nbr_from_str(str, nbr_num, 0, 0);
  signs = get_operands_from_str(str, nbr_signs);
  my_putstr(signs);
  my_sort_wordtab(nbr, nbr_num);
  while (i <= nbr_num)
    {
      free(nbr[i]);
      i++;
    }
  free(nbr);
}
