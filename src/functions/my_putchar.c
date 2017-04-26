/*
** my_putchar.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Apr  5 18:23:33 2017 Simon LEJEUNE
** Last update Wed Apr  5 18:36:21 2017 Simon LEJEUNE
*/

#include <unistd.h>

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
