##
## Makefile for  in /home/afassiadel/delivery/CPool_Day10
## 
## Made by adel afassi
## Login   <afassiadel@epitech.net>
## 
## Started on  Fri Oct 14 09:35:09 2016 adel afassi	
## Last update Sun Nov 20 18:31:12 2016 adel afassi
##

CC	= 	gcc -c

RM	= 	rm -f

SRCS	=	my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strlen.c		\
		my_put_nbr_long.c	\
		my_putnbr_base.c	\
		my_printf.c		\
		flag.c			\
		flag_two.c		\
		my_put_nbr_short.c	\
		my_put_nbr_unsigned_int.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS)
		ar rc libmy.a $(OBJS)

clean:
		rm -f $(OBJS)

fclean: 	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: 	all clean fclean re
