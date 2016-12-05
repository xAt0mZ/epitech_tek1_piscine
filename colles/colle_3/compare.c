/*
** compare.c for colle3 in /home/baron_l//local/rendu/piscine/colles/colle_3
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 27 21:44:37 2012 louis-philippe baron
** Last update Sat Oct 27 23:46:45 2012 louis-philippe baron
*/

int	normal_case(char *buffer)
{
  if (buffer[0] == 'o' && buffer[large] == 'o' &&
      buffer[total] == 'o' && buffer[total - large] == 'o')
    return (1);
  else if (buffer[0] == '/' && buffer[large] == '\\' &&
	   buffer[total] == '\\' && buffer[total - large] == '/')
    return (2);
  else if (buffer[0] == 'A' && buffer[large] == 'A' &&
	   buffer[total] == 'C' && buffer[total - large] == 'C')
    return (3);
  else if (buffer[0] == 'A' && buffer[large] == 'C' &&
	   buffer[total] == 'A' && buffer[total - large] == 'C')
    return (4);
  else if (buffer[0] == 'A' && buffer[large] == 'C' &&
	   buffer[total] == 'C' && buffer[total - large] == 'A')
    return (5);
  else
    return (0);
}

int	particular_case(char *buffer)
{
  if (buffer[0] == 'o')
    return (1);
  else if (buffer[0] == '*')
    return (2);
  else if (buffer[0] == 'B')
    return (6);
  else
    return (0);
}

int	select_response(int colle, int l, int h)
{
  if (colle == 0)
    false_glue();
  else if (colle != 0 && colle != 6)
    last_line(colle, l, h);
  else if (colle == 6)
    last_line_mult(3, l, h);
}
