/*
** colle_1.c for colle_1 in /home/baron_l//local/rendu/piscine/colles/colle_1
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct  6 15:14:23 2012 louis-philippe baron
** Last update Sat Oct  6 15:24:52 2012 louis-philippe baron
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	colle(int lm, int hm)
{
  int l;
  int h;

  l = 0;
  h = 0;
  while (l <= lm)
    {
      my_putchar("B");
      l++;
    }
}

int	main()
{
  colle(5, 5);
  return(0);
}
