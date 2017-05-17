/*
** my_epurstr.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Wed May 17 13:31:47 2017 Simon LEJEUNE
** Last update Wed May 17 14:15:23 2017 Simon LEJEUNE
*/

#include "../../include/my.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*my_epurstr(char *str)
{
  int	i;
  int	j;
  char	*newstr;

  i = strlen(str);
  newstr = malloc(sizeof(char) * (i + 1));
  i = 0;
  j = 0;
  while (str[i] == '\t' || str[i] == ' ')
    i++;
  while (str[i] != '\0')
    {
      newstr[j] = str[i];
      j++;
      if (str[i] == '\t' || str[i] == ' ')
	while (str[i] == '\t' || str[i] == ' ')
	  i++;
      else
	i++;
    }
  newstr[j] = '\0';
  return (newstr);
}
