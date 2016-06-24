/*
** main.c for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/src
**
** Made by Morgan Simon
** Login   <morgan@epitech.net>
**
** Started on  Fri Nov 20 19:50:52 2015 Morgan Simon
** Last update Fri Jun 24 09:30:40 2016 Morgan SIMON
*/

#include <stdlib.h>
#include "push_swap.h"

t_list		*init()
{
  t_list	*list;

  if ((list = malloc(sizeof(t_list))) == NULL)
      return (NULL);
  list->next = list;
  list->prev = list;
  list->data = 0;
  return (list);
}

int		checking(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next->next != list)
    {
      if (tmp->next->data > tmp->next->next->data)
	return (0);
      tmp = tmp->next;
    }
  return (1);
}

t_list		*algo(t_list *l_a, t_list *l_b)
{
  t_list	*tmp;

  tmp = l_a;
  while (checking(l_a) != 1)
    {
      while (tmp->next->data > tmp->next->next->data
	     || tmp->next->data > tmp->prev->data)
	{
	  if (tmp->next->data > tmp->next->next->data)
	    sa(l_a);
	  else
	    rra(l_a);
	}
      pb(l_a, l_b);
    }
  tmp = l_b;
  while (tmp->next != l_b)
    {
      pa(l_a, l_b);
      tmp = tmp->next;
    }
  pa(l_a, l_b);
  if (checking(l_a) != 1)
    return (algo(l_a, l_b));
  return (l_a);
}

void		display(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  tmp = tmp->next;
  if (tmp == NULL)
    {
      write(1, "List is Empty", 13);
      return;
    }
  while (tmp != list)
    {
      my_put_nbr(tmp->data);
      my_putchar(' ');
      tmp=tmp->next;
    }
  my_putchar('\n');
}

int		main(int ac, char **av)
{
  int		i;
  t_list	*l_a;
  t_list	*l_b;

  i  = 1;
  l_a = init();
  l_b = init();
  if (ac == 1)
    {
      my_putstr("Error : no parameters\n");
      return (0);
    }
  while (av[i] != '\0')
    {
      list_push_back(l_a, my_getnbr(av[i]));
      i++;
    }
  if (checking(l_a) == 1)
    {
      my_putstr("List already sort\n");
      return (0);
    }
  my_putstr("Algorithm:\n");
  algo(l_a, l_b);
  my_putstr("\n\nNumbers:\n");
  display(l_a);
  my_putchar('\n');
  free_list(l_a);
  free_list(l_b);
  return (0);
}
