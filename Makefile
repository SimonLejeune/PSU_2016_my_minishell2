##
## Makefile for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2
## 
## Made by LEJEUNE
## Login   <simon.lejeune@epitech.eu>
## 
## Started on  Mon Apr  3 14:52:15 2017 LEJEUNE
## Last update Mon Apr  3 15:32:05 2017 LEJEUNE
##

SRC	=	src/functions.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc -W -Wall -Wextra

CFLAGS	=	-I include

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all
