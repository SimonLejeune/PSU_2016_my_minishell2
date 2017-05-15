/*
** my_getenv.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Tue May  2 00:02:02 2017 Simon LEJEUNE
** Last update Mon May 15 14:41:20 2017 Simon LEJEUNE
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

  i = 0;
  while (env[i] != NULL)
    {
      if (env[i][0] == 'P' && env[i][1] == 'A' && env[i][2] == 'T'
	  && env[i][3] == 'H' && env[i][4] == '=')
	{
	  tab = my_str_to_wordtab(env[i], ':');
	  return (tab);
	}
      i++;
    }
  return (NULL);
}