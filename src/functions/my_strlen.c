/*
** my_strlen.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Apr  5 18:25:29 2017 Simon LEJEUNE
** Last update Wed Apr  5 18:36:48 2017 Simon LEJEUNE
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  i++;
  return (i);
}
