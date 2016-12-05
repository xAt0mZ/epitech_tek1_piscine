/*
** my_aff_chiffre.c for my_aff_chiffre in /home/baron_l//local/rendu/piscine/Jour_03
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct  3 11:43:02 2012 louis-philippe baron
** Last update Wed Oct  3 11:48:43 2012 louis-philippe baron
*/
int	my_aff_chiffre()
{
  int	a;

  a = '0';
  while (a <= '9')
    {
      my_putchar(a);
      a++;
    }
}
