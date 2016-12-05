/*
** my_showstr.c for my_showstr in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 10 11:49:18 2012 louis-philippe baron
** Last update Sat Oct 20 22:08:19 2012 louis-philippe baron
*/

int	my_showstr(char *str)
{
  int	i;
  char	base[] = "0123456789abcdef";

  i = 0;
  while (str[i] != '\0')
    {
      if (!(str[i] >= 32 && str[i] <= 126))
	{
	  my_putchar('\\');
	  if (str[i] > 0 && str[i] < 16)
	    my_putchar('0');
	  my_putnbr_base(str[i], base);
	}
      else
	my_putchar(str[i]);
      i++;
    }
  return (0);
}
