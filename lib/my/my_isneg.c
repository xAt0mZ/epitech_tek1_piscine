/*
** my_isneg.c for my_isneg in /home/baron_l//local/rendu/piscine/Jour_03
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct  3 11:15:57 2012 louis-philippe baron
** Last update Wed Oct 10 13:18:39 2012 louis-philippe baron
*/

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  else
    my_putchar('P');
}
