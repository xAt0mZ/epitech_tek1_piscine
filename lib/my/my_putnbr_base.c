/*
** my_putnbr_base.c for my_putnbr_base in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 17 16:04:19 2012 louis-philippe baron
** Last update Sat Oct 20 21:58:57 2012 louis-philippe baron
*/

int	my_putnbr_base(int nb, char *base)
{
  int	i;

  i = my_strlen(base);
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  if (nb == 0)
    return (0);
  my_putnbr_base(nb / i, base);
  my_putchar(base[nb % i]);
}
