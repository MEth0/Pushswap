/*
** push_swap.h for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap/include/
**
** Made by Morgan Simon
** Login   <simon_z@epitech.eu>
**
** Started on  Tue Nov 17 20:52:24 2015 Morgan Simon
** Last update Fri Nov 20 19:46:28 2015 Morgan Simon
*/

#ifndef PUSH_SWAP_H_
# define PUSH_SWAP_H_

typedef struct	s_list
{
  int		data;
  struct s_list	*next;
  struct s_list	*prev;
}		t_list;

void		sa(t_list *list);
void		sb(t_list *list);
void		ss(t_list *s1, t_list *s2);
void		pa(t_list *l_a, t_list *l_b);
void		pb(t_list *l_a, t_list *l_b);
void		rra(t_list *l_a);
int		write(int, char *, int);
void		my_putchar(char c);
void		my_put_nbr(int nb);
void		my_putstr(char *str);
int		my_getnbr(char *str);
int		my_strlen(char *str);
void		list_push_back(t_list *list, int data);
void		list_push_front(t_list *list, int data);
void		list_delete_start(t_list *list);
void		list_delete_last(t_list *list);
int		checking(t_list *list);
t_list		*init();
void		free_list(t_list *list);

#endif /* !PUSH_SWAP_H_ */
