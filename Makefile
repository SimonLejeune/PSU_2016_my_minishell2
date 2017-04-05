##
## Makefile for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2
## 
## Made by LEJEUNE
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Mon Apr  3 14:52:15 2017 LEJEUNE
## Last update Tue Apr  4 14:53:03 2017 Simon Lejeune
##

SRC	=	src/functions.c \
		src/main.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc -W -Wall -Wextra

CFLAGS	=	-I include

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L./include -lgnl

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
