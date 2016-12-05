/*
** sapin.c for sapin in /home/baron_l//local/rendu/piscine/sapin
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 18:47:05 2012 louis-philippe baron
** Last update Sun Oct  7 22:45:53 2012 louis-philippe baron
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	calc_stars_last(int n)
{
  int	i;
  int	stars_at_last;

  i = 1;
  stars_at_last = 1;
  while ( i <= n)
    {
      stars_at_last = stars_at_last + (2 * ((i - 1) / 2) + 6);
      i++;
    }
  return (stars_at_last);
}
/*
int	calc_stars_first(int n)
{
  int	i;
  int	stars_at_first;

  i = 1;
  stars_at_first = 1;
  if ( i - 1 == 0)
    return (7);
  while (i <= n)
    {
      stars_at_first = calc_stars_last(i - 1) - (2 * ((i - 1)) / 2);
      i++;
    }*/

int	display(int n, int step, int line)
{
  while ()
    {

    }
  while()
    {

    }
}

int	corps(int n)
{
  int	step;
  int	line;

  step = 0;
  while (step < n)
    {
      line = 0;
      while (line <= step + 3)
	{
	  display(n, step, line);
	  line ++;
	}
      step++;
    }
}

  
int	main()
{
  corps(3);
}



/*
    int	hauteur_du_sapin(int n)
    {
    int	a;
    int	i;
    int	b;
	
    i = 0;
    a = 0;
    b = 0;

    while (b < n)
    {
    a = a + b;
    b++;
    }
    while (i < (4 * n + a))
    {
    my_putchar('*');
    my_putchar('\n');
    i++;
    }
    }
*/
