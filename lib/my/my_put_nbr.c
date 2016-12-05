/*
** my_put_nbr.c for my_put_nbr in /home/baron_l//local/rendu/piscine/Jour_07/lib/my
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct  9 16:54:15 2012 louis-philippe baron
** Last update Tue Oct 23 13:28:27 2012 louis-philippe baron
*/

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      nb = nb * (-1);
      my_putchar('-');
    }
  if (nb == -2147483648)
    {
      my_putstr("2147483648");
      return (0);
    }
  if (nb > 9)
     my_put_nbr(nb / 10);
    my_putchar((nb % 10) + '0');
}
