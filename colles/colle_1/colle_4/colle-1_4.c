/*
** colle-1_4.c for colle_1.c in /home/versme_a//afs/rendu_local/piscine/Colle_1
** 
** Made by alexandre versmee
** Login   <versme_a@epitech.net>
** 
** Started on  Sat Oct  6 14:22:54 2012 alexandre versmee
** Last update Sat Oct  6 18:13:33 2012 alexandre versmee
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	display(int w_max, int h_max, int h, int w)
{
  if ((w_max == 1 && h_max == 1))
    my_putchar('B');
  else if ((w_max == 1 && h_max != 1) || (h_max == 1 && w_max))
    my_putchar('B');
  else if  (w == 1 && h == 1)
    my_putchar('A'); 
  else if (( h == 1) && (w == w_max))
    my_putchar('C');
  else if ((h == h_max) && (w == 1)) 
    my_putchar('A');
  else if ((h == h_max) && (w == w_max))
    my_putchar('C');
  else if (((w != 1) || (w != w_max)) && ((h == 1) || (h == h_max)))
    my_putchar('B');
  else if( ((w == 1) || (w == w_max)) && ((h != 1) || (h != h_max)))
    my_putchar('B');
  else
    my_putchar(' ');
}

int	colle(int w_max, int h_max)
{
  int	h;
  int	w;

  h = 1;
  if ((w_max <= 0) || (h_max <= 0 ))
    {
      my_putchar('\n');
      return (0);
    }
  while (h <= h_max)
    {
      w = 1;
      while (w <= w_max)
	{
	  display(w_max, h_max, h, w);
	  w  = w + 1;
	}
      my_putchar('\n');
      h = h + 1;
    } 
}

int	main()
{
  colle(5, 5);
  return (0);
}
