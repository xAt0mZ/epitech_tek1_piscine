/*
** test.c for my_strlen in /home/baron_l//local/rendu/piscine/Jour_04
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Oct  4 14:37:01 2012 louis-philippe baron
** Last update Wed Oct 10 11:15:52 2012 louis-philippe baron
*/

int	my_strlen(char *str)
{
  int	n;

  n = 0;
  while (str[n] != '\0')
    n++;
  return (n);
}
