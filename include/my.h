/*
** my.h for minishell2 in /home/slejeune/Shell_Programming/PSU_2016_minishell2/include
** 
** Made by Simon Lejeune
** Login   <simon.lejeune@epitech.eu>
** 
** Started on  Tue Apr  4 14:44:11 2017 Simon Lejeune
** Last update Mon May 15 13:02:21 2017 Simon LEJEUNE
*/

#ifndef		MY_H_
#define		MY_H_

void	my_putchar(char);
void	my_putstr(char*);
int	my_strlen(char*);
char	**my_str_to_wordtab(char *, char);
int	count_char(char *, char, int);
int	count_word(char *, char);
char	**my_cpyenv(char **);
char	**get_path(char **);

#endif		/*!MY_H_*/
