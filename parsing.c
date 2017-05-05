/*
** parsing.c for pars in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Wed Dec 14 14:52:03 2016 DORIAN DEBOUT
** Last update Wed Dec 14 14:52:19 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int     pars_i(char **tab)
{
  int   i;
  int   j;

  i = 1;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	j = j + 1;
      i = i + 1;
    }
  return (i);
}

int     pars_j(char **tab)
{
  int   i;
  int   j;

  i = 1;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	j = j + 1;
      i = i + 1;
    }
  return (j);
}
