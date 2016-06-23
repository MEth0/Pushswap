/*
** lib.c for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/lib/
**
** Made by Morgan Simon
** Login   <simon_z@epitech.eu>
**
** Started on  Wed Nov 18 14:18:05 2015 Morgan Simon
** Last update Fri May 20 17:11:30 2016 Morgan SIMON
*/

#include <stdlib.h>
#include "push_swap.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_getnbr(char *str)
{
  int	i;
  int	nb;
  int	minus;

  i = 0;
  nb = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	nb++;
      i++;
    }
  if (nb % 2 == 0)
    minus = 1;
  else
    minus = -1;
  nb = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = (nb * 10) + str[i] - '0';
      i++;
    }
  return (minus * nb);
}
