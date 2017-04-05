/*
** main.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:37:23 2017 Simon Lejeune
** Last update Tue Apr  4 16:58:41 2017 Simon Lejeune
*/

#include <unistd.h>
#include <stdlib.h>

#include "my.h"
#include "gnl.h"

int	main(int ac, char **av, char **envp)
{
  char	*s;
  char	**tab;
  int	i;

  i = 0;
  s = NULL;
  tab = NULL;
  if (ac == 1)
    {
      while (42)
	{
	  my_putstr("$>");
	  s = get_next_line(0);
	  tab = my_str_to_wordtab(s);
	  printf("%s\n", envp[i]);
	  i++;
	}
    }
}
