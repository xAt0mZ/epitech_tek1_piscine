/*
** fleche.c for fleche in /home/baron_l//local/rendu/piscine/sapin/sapin_remake
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 20 22:24:20 2012 louis-philippe baron
** Last update Sat Oct 20 22:57:17 2012 louis-philippe baron
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstars(char c, int nb)
{
  int	i;

  i = 0;
  while (i <= nb)
    {
      my_putchar(c);
      i++;
    }
}

void	my_putspace(char c, int nb)
{
  while (nb >= 0)
    {
      my_putchar(c);
      nb--;
    }
}

void	fleche(int taille)
{
  int	i;

  i = 0;
  while (i < taille)
    {
      my_putspace(' ', i);
      my_putstars('*', i * 2);
      my_putchar('\n');
      i++;
    }
  while (i >= 0)
    {
      my_putspace(' ', i);
      my_putstars('*', i * 2);
      my_putchar('\n');
      i--;
    }
}

int	main()
{
  int	taille;

  taille = 30;
  fleche(taille);
}
