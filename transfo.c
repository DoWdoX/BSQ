/*
** transfo.c for transfo in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Thu Dec 15 13:09:26 2016 DORIAN DEBOUT
** Last update Thu Dec 15 16:54:29 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

char	**point_rond(char **tab, char c)
{
  int	i;
  int	j;

  i = 1;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] == '0')
	    tab[i][j] = 'o';
	  else if (tab[i][j] == c)
	    tab[i][j] = 'x';
	  else
	    tab[i][j] = '.';
	  j = j + 1;
	}
      i = i + 1;
    }
  return (tab);
}

char	**replace(char **tab, int l, int k, char a)
{
  char	d;
  char	c;
  int	m;

  m = k;
  c = a;
  d = a;
  while (a != '0')
    {
      d = c;
      while (d != '0')
	{
	  tab[l][k] = c;
	  k = k + 1;
	  d = d - 1;
	}
      k = m;
      l = l + 1;
      a = a - 1;
    }
  point_rond(tab, c);
  return (tab);
}

char	**find_biggest(char **tab, int l, char a, char b)
{
  int	i;
  int	j;
  int	k;

  i = 1;
  a = tab[i][0];
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  j = j + 1;
	  b = tab[i][j];
	  if (a <= b)
	    {
	      k = j;
	      l = i;
	      a = b;
	      tab[i][j] = 'z';
	    }
	}
      i = i + 1;
    }
  tab = replace(tab, l, k, a);
  return (tab);
}

char	**all(char **tab)
{
  int	l;
  char	a;
  char	b;

  l = 0;
  check_char(tab);
  tab = first_step(tab);
  tab = algo(tab);
  tab = find_biggest(tab, l, a, b);
  print_map(tab);
  return (tab);
}
  
