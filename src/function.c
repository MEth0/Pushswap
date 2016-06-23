/*
** function.c for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/src
**
** Made by Morgan Simon
** Login   <morgan@epitech.net>
**
** Started on  Fri Nov 20 19:50:34 2015 Morgan Simon
** Last update Fri Nov 20 19:50:39 2015 Morgan Simon
*/

#include <stdlib.h>
#include "push_swap.h"

void		list_push_back(t_list *list, int data)
{
  t_list	*lm;

  if ((lm = malloc(sizeof(t_list))) == NULL)
    return;
  lm->data = data;
  lm->prev = list->prev;
  lm->next = list;
  list->prev->next = lm;
  list->prev = lm;
  return;
}

void		list_push_front(t_list *list, int data)
{
  t_list	*lm;

  if ((lm = malloc(sizeof(t_list))) == NULL)
    return;
  lm->data = data;
  lm->next = list->next;
  lm->prev = list;
  list->next->prev = lm;
  list->next= lm;
  return;
}

void		list_delete_start(t_list *list)
{
  if (list->next == list)
    return;
  list->next = list->next->next;
  list->next->prev = list;
  return;
}

void		list_delete_last(t_list *list)
{
  if (list->next == list)
    return;
  list->prev = list->prev->prev;
  list->prev->next = list;
  return;
}

void		free_list(t_list *list)
{
  t_list	*tmp;
  t_list	*suiv;

  tmp = list->next;
  while(tmp != list)
    {
      suiv = tmp->next;
      free(tmp);
      tmp = suiv;
    }
}
