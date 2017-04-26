/*
** my_str_to_wordtab.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Apr  5 18:27:11 2017 Simon LEJEUNE
** Last update Wed Apr 12 19:29:48 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include <stdio.h>

//#include "my.h"

int	count_word(char *str, char limiter)
{
  int	i;
  int	res;

  i = 0;
  res = 0;
  while (str[i] != '\0')
    {
      if (str[i] == limiter && str[i] != '\0')
	res++;
      i++;
    }
  printf("word ==> %d\n", res);
  return (res);
}

char	**alloc_tab(char *str, char limiter)
{
  char	**tab;
  int	i;
  int	res;
  int	compt;

  i = 0;
  compt = 0;
  if ((tab = malloc(sizeof(char *) * count_word(str, limiter))) == NULL)
    return (NULL);
  while (str[i] != '\0' && str[i] != '\n')
    {
      res = 0;
      while (str[i] != '\0' && str[i] != limiter && str[i] != '\n')
	{
	  res++;
	  i++;
	}
      if ((tab[compt] = malloc(sizeof(char) * res)) == NULL)
	return (NULL);
      printf("word %d ==> char %d\n", compt, res);
      compt++;
      i++;
    }
  return (tab);
}

char	**my_str_to_wordtab(char *str, char limiter)
{
  char	**tab;
  int	i;
  int	a;
  int	b;

  i = 0;
  a = 0;
  b = 0;
  if ((tab = malloc(sizeof(char*) * count_word(str, limiter))) == NULL)
    return (NULL);
  tab = alloc_tab(str, limiter);
  while (str[i] != '\0')
    {
      while (str[i] != limiter && str[i] != '\0')
	tab[a][b++] = str[i++];
      a++;
      i++;
    }
  return (tab);
}

void	main(int ac, char **av)
{
  my_str_to_wordtab(av[1], ' ');
}
