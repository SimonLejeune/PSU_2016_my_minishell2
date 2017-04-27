/*
** main.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:37:23 2017 Simon Lejeune
** Last update Thu Apr 27 18:27:40 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>

#include "my.h"
#include "gnl.h"

char	*get_path(char **tab)
{
  char	*path;
  int	i;
  int	j;
  int	k;
  char	*tmp;

  i = 0;
  j = 0;
  k = 0;
  path = NULL;
  tmp = "PATH=";
  while (tab[i] != NULL)
    {
      while (tab[i][j] == tmp[j])
	{
	  if (tab[i][j] != tmp[j])
	    j = 0;
	  j++;
	}
      while (tab[i][j] != '\n')
	{
	  path[k] = tab[i][j];
	  k++;
	  j++;
	}
      i++;
    }
  printf("%s\n", path);
  return (path);
}

int	main(int ac, char **av, char **envp)
{
  char	*s;
  char	**tab;
  char	*path;
  int	i;

  s = NULL;
  tab = NULL;
  i = 0;
  path = getenv("PATH");
  printf("%s\n", path);
  tab = my_str_to_wordtab(path, ':');
  while (tab[i] != '\0')
    {
      printf("%s\n", tab[i]);
      i++;
    }
  if (ac == 1)
    {
      while (42)
	{
	  my_putstr("$>");
	  s = get_next_line(0);
	  tab = my_str_to_wordtab(s, ' ');
	  execve(tab[0], tab, envp);
	}
    }
  return (0);
}
