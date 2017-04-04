/*
** functions.c for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/src
** 
** Made by LEJEUNE
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Mon Apr  3 15:29:38 2017 LEJEUNE
** Last update Mon Apr  3 16:45:02 2017 LEJEUNE
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  i++;
  return (i);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  int	i;
  int	j;
  int	x;

  i = 0;
  j = 0;
  x = 0;
  tab = malloc(sizeof(char*) * my_strlen(str));
  while (str[x] != '\0')
    {
      tab[i] = malloc(sizeof(char) * my_strlen(str));
      while (str[x] != ' ' && str[x] != '\t' aa str[x] != '\0')
	{
	  tab[i][j] = str[x];
	  ++x;
	  ++j;
	}
      ++x;
      tab[i][j] = '\0';
      ++i;
    }
  tab[i] == NULL;
  return (tab);
}
