/*
** main.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:37:23 2017 Simon Lejeune
** Last update Mon May 15 14:49:06 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "my.h"
#include "gnl.h"

int	main(int ac, char **av, char **env)
{
  char	*s;
  char	**my_command;
  char	**my_env;
  char	**my_bin;
  int	i;

  i = 0;
  if (ac == 1)
    {
      my_env = my_cpyenv(env);
      while (42)
	{
	  my_putstr("$>");
	  s = get_next_line(0);
	  my_command = my_str_to_wordtab(s, ' ');
	  my_bin = get_path(my_env);
	  while (my_bin[i] != NULL)
	    {
	      printf("%s\n", my_bin[i]);
	      i++;
	    }
	}
      return (0);
    }
}
