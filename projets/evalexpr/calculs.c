/*
** calculs.c for evalexpr in /home/baron_l//local/rendu/piscine/projets/evalexpr
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Oct 26 11:42:21 2012 louis-philippe baron
** Last update Sun Oct 28 14:15:05 2012 louis-philippe baron
*/

#include "evalexpr.h"

int	plus(int nb1, int nb2)
{
  int	result;

  result = nb1 + nb2;
  return (result);
}

int	minus(int nb1, int nb2)
{
  int	result;

  result = nb1 - nb2;
  return (result);
}

int	time(int nb1, int nb2)
{
  int	result;

  result = nb1 * nb2;
  return (result);
}

int	divide(int nb1, int nb2)
{
  int	result;

  result = nb1 / nb2;
  return (result);
}

int	modulo(int nb1, int nb2)
{
  int	result;

  result = nb1 % nb2;
  return (result);
}
