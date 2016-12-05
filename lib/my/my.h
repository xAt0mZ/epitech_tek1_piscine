/*
** my.h for my in /home/baron_l//local/rendu/piscine/Jour_09
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 12 15:14:56 2012 louis-philippe baron
** Last update Mon Oct 22 13:26:26 2012 louis-philippe baron
*/

#ifndef MY_H_
#define MY_H_

void	my_putchar(char);
int	my_isneg(int);
int	my_put_nbr(int);
int	my_swap(int *, int *);
int	my_putstr(char *);
int	my_strlen(char *);
int	my_getnbr(char *);
void	my_sort_int_tab(int *, int);
int	my_power_rec(int, int);
int	my_square_root(int);
int	my_is_prime(int);
int	my_find_prime_sup(int);
char	*my_strcpy(char *, char *);
char	*my_strncpy(char *, char *, int);
char	*my_revstr(char *);
char	*my_strstr(char *, char *);
int	my_strcmp(char *, char *);
int	my_strncmp(char *, char *, int);
char	*my_strupcase(char *);
char	*my_strlowcase(char *);
char	*my_strcapitalize(char *);
int	my_str_isalpha(char *);
int	my_str_isnum(char *);
int	my_str_islower(char *);
int	my_str_isupper(char *);
int	my_str_isprintable(char *);
int	my_showstr(char *);
int	my_showmem(char *, int);
char	*my_strcat(char *, char *);
char	*my_strncat(char *, char *, int);
int	my_strlcat(char *, char *, int);
int	my_getnbr_base(char *, char *);
int	my_punbr_base(int, char *);
char	*convert_base(char *, char *, char *);

#endif
