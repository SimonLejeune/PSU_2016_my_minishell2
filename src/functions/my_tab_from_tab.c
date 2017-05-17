/*
** my_tab_from_tab.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Wed May 17 15:57:58 2017 Simon LEJEUNE
** Last update Wed May 17 19:46:07 2017 Simon LEJEUNE
*/

#include <stdlib.h>
#include "my.h"

char	**my_tab_from_tab(char **tab)
{
  int	nb_line;
  int	nb_char;
  char	**new_tab;

  nb_line = my_tablen(tab);
  new_tab = malloc(sizeof(char *) * (nb_line + 1));
  new_tab[nb_line] = NULL;
  if (new_tab != NULL)
    {
      nb_line = 0;
      while (new_tab[nb_line] != NULL)
	{
	  nb_char = my_strlen(tab[nb_line]);
	  new_tab[nb_line] = malloc(sizeof(char) * (nb_char+ 1));
	  if (new_tab[nb_line] != NULL)
	    my_strcpy(tab[nb_line], new_tab[nb_line]);
	  nb_line++;
	}
    }
  return (new_tab);
}
