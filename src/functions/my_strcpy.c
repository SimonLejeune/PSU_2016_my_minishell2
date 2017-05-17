/*
** my_strcpy.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Wed May 17 19:31:09 2017 Simon LEJEUNE
** Last update Wed May 17 19:45:16 2017 Simon LEJEUNE
*/

#include "my.h"

char	*my_strcpy(char *src, char *dest)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
