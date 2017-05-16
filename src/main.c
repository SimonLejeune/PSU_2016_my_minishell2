/*
** main.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:37:23 2017 Simon Lejeune
** Last update Tue May 16 15:15:24 2017 Simon LEJEUNE
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "my.h"
#include "gnl.h"

int	main(int ac, char **av, char **env)
{
  char		*s;
  char		**my_command;
  char		**my_env;
  char		**my_path;
  int		i;
  pid_t		pid;

  if (ac == 1)
    {
      my_env = my_cpyenv(env);
      while (42)
	{
	  i = 0;
	  my_putstr("$>");
	  s = get_next_line(0);
	  if (s[0] != '\0')
	    {
	      my_command = my_str_to_wordtab(s, ' ');
	      my_path = get_path(my_env);
	      my_path = init_command(my_command, my_path);
	      while (my_path[i] != '\0')
		{
		  if (access(my_path[i], F_OK) != -1)
		    if ((pid = fork()) == 0) 
		      execve(my_path[i], my_command, env);
		  i++;
		}
	    }
	}
    }
  return (0);
}
