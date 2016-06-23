##
## Makefile for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap
##
## Made by Morgan Simon
## Login   <morgan@epitech.net>
##
## Started on  Tue Nov 17 10:24:20 2015 Morgan Simon
## Last update Thu Jun 23 17:57:41 2016 Morgan SIMON
##

CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-W -Wall -I./include

NAME	=	push_swap

SRCS	=	src/main.c	\
		src/function.c	\
		lib/lib.c	\
		src/ops.c	\
		src/my_put_nbr.c

OBJS	=	$(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
