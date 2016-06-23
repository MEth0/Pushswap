/*
** ops.c for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/src
**
** Made by Morgan Simon
** Login   <morgan@epitech.net>
**
** Started on  Fri Nov 20 19:51:25 2015 Morgan Simon
** Last update Fri Nov 20 19:51:26 2015 Morgan Simon
*/

#include <stdlib.h>
#include "push_swap.h"

void	sa(t_list *list)
{
  int	tmp;

  if (list->next == list || list->next->next == list)
    return;
  tmp = list->next->data;
  list->next->data = list->next->next->data;
  list->next->next->data = tmp;
  write(1, "sa ", 3);
  return;
}

void	sb(t_list *list)
{
  int	tmp;

  if (list->next == list || list->next->next == list)
    return;
  tmp = list->next->data;
  list->next->data = list->next->next->data;
  list->next->next->data = tmp;
  write(1, "sb ", 3);;
  return;
}

void	pa(t_list *l_a, t_list *l_b)
{
  int	tmp;

  if (l_b->next == l_b)
    return ;
  tmp = l_b->next->data;
  list_delete_start(l_b);
  list_push_front(l_a, tmp);
  write(1, "pa ", 3);
  return ;
}

void	pb(t_list *l_a, t_list *l_b)
{
  int	tmp;

  if (l_a->next == l_a)
    return ;
  tmp = l_a->next->data;
  list_delete_start(l_a);
  list_push_front(l_b, tmp);
  write(1, "pb ", 3);
  return ;
}

void	rra(t_list *list)
{
  int	tmp;

  tmp = list->prev->data;
  list_delete_last(list);
  list_push_front(list, tmp);
  write(1, "rra ", 4);
  return ;
}
