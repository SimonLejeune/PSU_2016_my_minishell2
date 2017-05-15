/*
** my_getenv.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Tue May  2 00:02:02 2017 Simon LEJEUNE
** Last update Mon May 15 18:21:58 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

char	**my_cpyenv(char **env)
{
  int	nb_line;
  int	nb_char;
  char	**tab;

  nb_line = 0;
  while (env[nb_line] != NULL)
    nb_line++;
  tab = malloc(sizeof(char*) * (nb_line + 1));
  tab[nb_line] = NULL;
  nb_line = 0;
  while (env[nb_line] != NULL)
    {
      tab[nb_line] = malloc(sizeof(char) * (my_strlen(env[nb_line]) + 1));
      nb_char = 0;
      while (env[nb_line][nb_char] != '\0')
	{
	  tab[nb_line][nb_char] = env[nb_line][nb_char];
	  nb_char++;
	}
      tab[nb_line][nb_char] = '\0';
      nb_line++;
    }
  return (tab);
}

char	**get_path(char **env)
{
  char	**tab;
  int	i;
  int	j;
  int	k;
  char	*path;

  i = 0;
  j = 0;
  k = 5;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T'
	  && env[i][3] == 'H' && env[i][4] == '=')
	{
	  path = malloc(sizeof(char) * my_strlen(env[i]) + 1);
	  while (env[i][k] != '\0')
	    path[j++] = env[i][k++];
	  path[j] = '\0';
	  tab = my_str_to_wordtab(path, ':');
	  return (tab);
	}
      i++;
    }
  return (NULL);
}

char	**init_command(char **command, char **path)
{
  int	line;
  int	chars;
  int	k;
  int	len_com;
  char	**new_tab;

  len_com = my_strlen(command[0]);
  line = 0;
  while (path[line] != NULL)
    line++;
  new_tab = malloc(sizeof(char*) * (line + 1));
  new_tab[line] = NULL;
  line = 0;
  while (path[line] != NULL && command[0] != NULL)
    {
      
      chars = my_strlen(path[line]);
      new_tab[line] = malloc(sizeof(char) * (chars + len_com + 2));
      chars = 0;
      k = 0;
      while (path[line][chars] != '\0')
	{
	  new_tab[line][chars] = path[line][chars];
	  chars++;
	}
      new_tab[line][chars] = '/';
      chars++;
      while (command[0][k] != '\0')
	{
	  new_tab[line][chars] = command[0][k];
	  chars++;
	  k++;
	}
      new_tab[line][chars] = '\0';
      line++;
    }
  return (new_tab);
}
