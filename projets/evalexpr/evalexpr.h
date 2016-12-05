/*
** evalexpr.h for evalexpr in /home/baron_l//local/rendu/piscine/projets/evalexpr
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 26 11:37:33 2012 louis-philippe baron
** Last update Sun Oct 28 18:56:12 2012 louis-philippe baron
*/

#ifndef	EVALEXPR_H_
#define	EVALEXPR_H_

int	eval_expr(char *);
int	plus(int, int);
int	minus(int, int);
int	time(int, int);
int	divide(int, int);
int	modulo(int, int);
char	**get_nbr_from_str(char *, int, int, int);
char	*get_operands_from_str(char *, int);

#endif
