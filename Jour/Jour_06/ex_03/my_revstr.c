/*
** my_revstr.c for my_revstr in /home/baron_l//local/rendu/piscine/Jour_06
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Oct  8 13:12:38 2012 louis-philippe baron
** Last update Tue Oct  9 08:51:47 2012 louis-philippe baron
*/

int	my_strlen(char *str)
{
    int	n;

    n = 0;
    while (str[n] != '\0')
      n++;
    return (n);
}

int	my_swap(char *a, char *b)
{
  int	c;

  c = *a;
  *a = *b;
  *b = c;
}

int	my_putstr(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n++;
    }
}

char	*my_revstr(char *str)
{
  int	u;
  int	d;

  u = 0;
  d = my_strlen(str) - 1;
  while (u < d)
    {
      my_swap(&str[u], &str[d]);
      u++;
      d--;
    }
  return (str);
}
