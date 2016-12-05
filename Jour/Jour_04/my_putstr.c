/*
** test.c for my_putstr in /home/baron_l//local/rendu/piscine/Jour_04
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 14:11:43 2012 louis-philippe baron
** Last update Thu Oct  4 21:06:34 2012 louis-philippe baron
*/

int	my_putstr(char *str)
{
  int n;

  n = 0;
  while (str[n] != '\0')
    {
      my_putchar(str[n]);
      n++;
    }
}
