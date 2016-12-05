/*
** main.c for main_colle_2-1 in /home/baron_l//local/rendu/piscine/colles/colle_2/colle_2-1_imposee
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Oct 13 17:26:26 2012 louis-philippe baron
** Last update Sat Oct 13 23:04:18 2012 louis-philippe baron
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;
  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_aff_spaces(int nb)
{
  int	i;

  i = 0;
  while (i < nb)
    {
      my_putchar(' ');
      i++;
    }
}

int     my_getnbr(char *str)                                                                        
{                                                                                                   
  int   i;                                                                                          
  int   a;                                                                                          
                                                                                                    
  i = 0;                                                                                            
  a = 0;                                                                                            
  if (str[0] == '-')                                                                                
    i++;                                                                                          
  while (str[i] >= '0' && str[i] <= '9')                                                            
    {                                                                                               
      a = a * 10 + (str[i] - 48);                                                                   
      i++;                                                                                          
    }                                                                                               
  if (str[0] == '-')                                                                                
    a = a * (-1);                                                                                   
  return (a);                                                                                       
}                                                                                                   

int	main(int argc, char **argv)
{
  int	i;
  int	time_1;
  int	time_2;

  i = 3;
  if (argc == 1 || argc == 2 || argc == 3)
    return (0);
  if (argc > 3)
    {
      time_1 = my_getnbr(argv[1]);
      time_2 = my_getnbr(argv[2]);
    }
  while (time_1 != 0 && time_2 != 0 && i < argc)
    {
      left_right(argv[i], time_1);
      i++;
      if (i == argc)
	i = 3;
      right_left(argv[i], time_2);
      i++;
      if (i == argc)
	i = 3;
    }
}
