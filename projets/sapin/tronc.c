/*
** tronc.c for sapin in /home/baron_l//local/rendu/piscine/sapin
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct  5 08:35:41 2012 louis-philippe baron
** Last update Sun Oct  7 15:46:31 2012 louis-philippe baron
*/

int	my_putchar(char c)
{
  write (1, &c, 1);
}

int	tronc(int n)
{
  int l;
  int h;
  int e;

  h = 0; 
  while (h < n)
    {
      e = 0;
      if (n%2 == 0)
	l = -1;
      else
	l = 0;
      while (l < n)
	{
	  while (e < 3 * n - 1)
	    {
	      my_putchar('*');
	      e++;
	    }
	  my_putchar('|');
	  l++;
	}
      my_putchar('\n');
      h++;
    }
}

int	main()
{
  tronc(1);
}
