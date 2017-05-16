/*
** my_strcmp.c for minishell in /home/simon.lejeune/projet_epitech/shell/PSU_2016_minishell2/src/functions
** 
** Made by Simon LEJEUNE
** Login   <simon.lejeune@epitech.net>
** 
** Started on  Tue May 16 15:25:31 2017 Simon LEJEUNE
** Last update Tue May 16 15:46:33 2017 Simon LEJEUNE
*/

int	my_strcmp(char *str, char *cmp)
{
  int	i;
  int	result;

  i = 0;
  result = 0;
  while (str[i] != '\0' && cmp[i] != '\0')
    {
      result = str[i] - cmp[i];
      i++;
    }
  if (str[i] == '\0' && cmp[i] != '\0')
    return (-1);
  if (str[i] != '\0' && cmp[i] == '\0')
    return (1);
  return (result);
}
