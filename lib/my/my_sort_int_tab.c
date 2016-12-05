/*
** my_sort_int_tab.c for my_sort_int_tab in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:46:03 2012 louis-philippe baron
** Last update Thu Oct 18 16:22:11 2012 louis-philippe baron
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;

  i = 1;
  while (i <= size)
    {
      if (tab[i - 1] > tab[i])
	{
	  my_swap(&tab[i - 1], &tab[i]);
	  i = 0;
	}
      i++;
    }
}
