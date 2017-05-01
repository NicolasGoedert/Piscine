##
## Makefile for makefile in /home/clement/Piscine/CPool_infinadd/prog
## 
## Made by clement girard
## Login   <clement@epitech.net>
## 
## Started on  Mon Oct 24 13:57:38 2016 clement girard
## Last update Wed Oct 26 11:51:57 2016 clement girard
##

NAME	=	infin_add

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

all: compile clean

compile:
	gcc -c $(SRCS)
	gcc $(SRCS) -L ../lib/my -lmy -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all compile clean fclean re
