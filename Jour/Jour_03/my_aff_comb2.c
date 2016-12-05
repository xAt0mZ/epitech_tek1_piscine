/*
** test.c for my_aff_comb2 in /home/baron_l//local/rendu/piscine/Jour_03
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 10:32:50 2012 louis-philippe baron
** Last update Thu Oct  4 20:36:02 2012 louis-philippe baron
*/

int	main()
{
  my_aff_comb2();
}

void	my_putchar(char c)
{
  write (1, &c, 1);
}

int	my_aff_comb2()
 {
  int m;
  int c;
  int d;
  int u;

  m = '0';
  c = '0';
  d = '0';
  u = '0';
  calc(m, c, d, u);
}

int	calc(int m, int c, int d, int u)
{
  while (m <= '9' && c <= '9' && d <= '9' && u <= '9')
    {
      disp(m, c, d, u);
      if (u != '9')
	u++;
      else if (d != '9')
	{
	  d++;
	  u = '0';
	}
      else if (c != '9')
	{
	  c++;
	  d = '0';
	  u = '0';
	}
      else if (m != '9')
	{
	  m++;
	  c = '0';
	  d = '0';
	  u = '0';
	} 
      else return (0);
    }
}

int	disp(int m, int c, int d, int u)
{
  if (m*10+c < d*10+u)
    {
      my_putchar(m);
      my_putchar(c);
      my_putchar(' ');
      my_putchar(d);
      my_putchar(u);
      if (!(m == '9' && c == '8' && d == '9' && u == '9'))
	{
	  my_putchar(',');
	  my_putchar(' ');
	}     
    }
}
