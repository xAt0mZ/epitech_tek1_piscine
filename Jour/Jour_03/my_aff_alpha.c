/*
** my_aff_alpha.c for my_aff_alpha in /home/baron_l//local/rendu/piscine/Jour_03
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct  3 09:54:50 2012 louis-philippe baron
** Last update Thu Oct  4 13:12:31 2012 louis-philippe baron
*/

int	my_aff_alpha()
{
  int a;

  a = 97;
  while (a <= 97 + 25)
    {
      my_putchar(a);
      a++;
    }
}
