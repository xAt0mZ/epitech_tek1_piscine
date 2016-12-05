/*
** my_aff_comb.c for my_aff_comb in /home/baron_l//local/rendu/piscine/Jour_03
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 10:31:49 2012 louis-philippe baron
** Last update Thu Oct  4 10:31:56 2012 louis-philippe baron
*/
int	my_aff_comb()
{
  int u;
  int d;
  int c;
  
  c = '0';
  d = c+1;
  u = d+1;
  calc(c, d, u);
} 

int	calc(int c, int d, int u)
{
  while (c < d && d < u && u <= '9')
    {
      print(c, d, u);
      if (u == '9')
	{
	  d++;
	  u = d;
	}
      if (d == '9')
	{
	  c++;
	  d = c+1;
	  u = d;
	}
      u++;
    }
}

int	print(int c, int d, int u)
{
  if (c != '7')
    {
      my_putchar(c);
      my_putchar(d);
      my_putchar(u);
      my_putchar(',');
      my_putchar(' ');
    }
  else
    {
      my_putchar(c);
      my_putchar(d);
      my_putchar(u);
    }  
}
