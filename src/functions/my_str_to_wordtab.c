/*
** my_str_to_wordtab.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Apr  5 18:27:11 2017 Simon LEJEUNE
** Last update Mon May 15 14:51:39 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include <stdio.h>

#include "my.h"

int	count_word(char *str, char limiter)
{
  int	i;
  int	res;

  i = 0;
  res = 1;
  while (str[i] != '\0')
    {
      if (str[i] == limiter && str[i] != '\0')
	res++;
      i++;
    }
  return (res);
}

int	count_char(char	*str, char limiter, int pos)
{
  int	res;

  res = 0;
  while (str[pos] != limiter && str[pos] != '\0')
    {
      res++;
      pos++;
    }
  return (res);
}

char	**my_str_to_wordtab(char *str, char limiter)
{
  char	**tab;
  int	i;
  int	mot;
  int	lettre;

  i = 0;
  mot = 0;
  tab = malloc(sizeof(char*) * (count_word(str, limiter) + 1));
  tab[count_word(str, limiter)] = NULL;
  while (str[i] != '\0')
    {
      lettre = 0;
      tab[mot] = malloc(sizeof(char) * (count_char(str, limiter, i) + 1));
      while (str[i] != limiter && str[i] != '\0')
	{
	  tab[mot][lettre++] = str[i++];
	}
      tab[mot][lettre] = '\0';
      if (str[i] != '\0')
	i++;
      mot++;
    }
  tab[mot] = NULL;
  return (tab);
}
