/*
** convert_base.c for convert_base in /home/baron_l//local/rendu/piscine/Jour_08
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 20 21:32:21 2012 louis-philippe baron
** Last update Fri Oct 26 14:03:26 2012 louis-philippe baron
*/

char	*convert_base(char *nbr, char *base_from, char *base_to)
{
  my_putnbr_base(my_getnbr_base(nbr, base_from), base_to);
}
