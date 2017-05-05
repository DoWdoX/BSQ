/*
** my.h for my.h in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ/include
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Tue Dec  6 10:48:47 2016 DORIAN DEBOUT
** Last update Thu Dec 15 17:23:10 2016 DORIAN DEBOUT
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
int     nbr_word(char *str);
int     nbr_char(char *str, int count);
void    word(int c, int *a, char *str, char **tab);
char    **wordtab(char *str, int hor);
char    **str_wordtab(char *str);
void	my_putchar(char c);
int	my_putstr(char *str);
int	my_printf(char *str, ...);
int	pars_i(char **tab);
int     pars_j(char **tab);
int	print_map(char **tab);
char	**algo(char **tab);
char	**first_step(char **tab);
char	**find_biggest(char **tab, int l, char a, char b);
char	**replace(char **tab, int l, int k, char a);
char	**point_rond(char **tab, char a);
char	**all(char **tab);
int	check_char(char **tab);
int	main2(int ac, char **av);

#endif
