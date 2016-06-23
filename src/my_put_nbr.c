/*
** my_put_nbr.c for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/src
**
** Made by Morgan Simon
** Login   <morgan@epitech.net>
**
** Started on  Fri Nov 20 19:51:11 2015 Morgan Simon
** Last update Fri Nov 20 19:51:12 2015 Morgan Simon
*/

#include "push_swap.h"

void     my_put_nbr(int nb)
{
  int   n;

  n = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb < 10)
    my_putchar(nb + '0');
  else if (nb > 9)
    {
      my_put_nbr(nb / 10);
      n = nb % 10;
      my_putchar(n + '0');
    }
}
