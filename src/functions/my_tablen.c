/*
** my_tablen.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Wed May 17 16:08:19 2017 Simon LEJEUNE
** Last update Wed May 17 19:49:02 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include "my.h"

int	my_tablen(char **tab)
{
  int	i;
  
  if (tab == NULL)
    return (0);
  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
