/*
** functions.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:37:47 2017 Simon Lejeune
** Last update Tue Apr  4 17:23:54 2017 Simon Lejeune
*/

#include <unistd.h>
#include <stdlib.h>

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

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

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  i++;
  return (i);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	x;

  i = 0;
  j = 0;
  x = 0;
  tab = malloc(sizeof(char*) * my_strlen(str));
  while (str[x] != '\0' && str[x] != '\t')
    {
      if (str[x] == ' ' || str[x] == '\n')
	{
	  while (str[x] == ' ')
	    x++;
	  i++;
	}
      tab[i] = malloc(sizeof(char) * my_strlen(str));
      while (str[x] != ' ' && str[x] != '\t' && str[x] != '\0')
	{
	  tab[i][j] = str[x];
	  ++x;
	  ++j;
	}
      ++x;
      tab[i][j] = '\0';
      ++i;
    }
  tab[i] = NULL;
  return (tab);
}
