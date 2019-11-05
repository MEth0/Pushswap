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
    exit(1);
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
    exit(1);
  lm->data = data;
  lm->next = list->next;
  lm->prev = list;
  list->next->prev = lm;
  list->next= lm;
  return;
}

void		list_delete_start(t_list *list)
{
  t_list *tmp = list->next;

  if (list->next == list) {
    free(list->next);
    return;
  }
  list->next = tmp->next;
  list->next->prev = list;
  free(tmp);
  return;
}

void		list_delete_last(t_list *list)
{
  t_list *tmp = list->prev;

  if (list->next == list) {
    free(list->prev);
    return;
  }
  list->prev = tmp->prev;
  list->prev->next = list;
  free(tmp);
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
  free(list);
}
