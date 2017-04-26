/*
** my_putstr.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Apr  5 18:24:26 2017 Simon LEJEUNE
** Last update Wed Apr  5 18:36:34 2017 Simon LEJEUNE
*/

#include "my.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
