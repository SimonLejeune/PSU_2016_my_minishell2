##
## Makefile for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2
## 
## Made by LEJEUNE
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Mon Apr  3 14:52:15 2017 LEJEUNE
## Last update Thu Apr 27 16:25:52 2017 Simon LEJEUNE
##

SRC	=	src/functions/my_putchar.c		\
		src/functions/my_putstr.c		\
		src/functions/my_strlen.c		\
		src/functions/my_str_to_wordtab.c	\
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra -Iinclude -g

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L./include -lgnl $(CFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
