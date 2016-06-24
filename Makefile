##
## Makefile for Pushswap in /home/morgan/rendu/CPE_2015_Pushswap
##
## Made by Morgan Simon
## Login   <morgan@epitech.net>
##
## Started on  Tue Nov 17 10:24:20 2015 Morgan Simon
## Last update Fri Jun 24 09:55:32 2016 Morgan SIMON
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

ECHO	=	/bin/echo -e


all:		xxc $(NAME)

xxc:
		@$(ECHO) "\n\033[0;31mFLAGS : \033[00m" $(CC) $(CFLAGS) "\n"

$(NAME):	$(OBJS)
		@$(CC) $(OBJS) -o $(NAME)
		@$(ECHO) "\n\e[1;32m >> Pushswap OK <<\e[00m\n"

clean:
		@$(RM) $(OBJS)
		@$(ECHO) "\033[0;32mClean OBJ    Files\033[00m"

fclean:		clean
		@$(RM) $(NAME)
		@$(ECHO) "\033[0;32mClean Binary Files\033[00m"

re:		fclean all

%.o:		%.c
		@$(CC) $(CFLAGS) -c $< -o $@ && \
		 $(ECHO) "\033[0;32m ◉  »\033[1;34m" $< "\033[00m" || \
		 $(ECHO) "\033[0;31m ⊗  »\033[1;34m" $< "\033[00m"

.PHONY:		all clean fclean re
