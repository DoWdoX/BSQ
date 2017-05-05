/*
1;4600;0c** main.c for main.c in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Tue Dec  6 10:00:06 2016 DORIAN DEBOUT
** Last update Thu Dec 15 17:29:35 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

char	verif(char a, char b, char c)
{
  if (a <= b && a <= c || a <= c && a <= b)
    return (a + 1);
  else if (b <= a && b <= c || b <= c && b <= a)
    return (b + 1);
  else if (c <= a && c <= b || c <= b && c <= a)
    return (c + 1);
}

char	**algo(char **tab)
{
  int	i;
  int	j;
  char	a;
  char	b;
  char	c;

  i = pars_i(tab) - 2;
  while (i != 0)
    {
      j = pars_j(tab) - 2;
      while (j != -1)
	{
	  a = tab[i][j + 1];
	  b = tab[i + 1][j];
	  c = tab[i + 1][j + 1];
	  if (tab[i][j] == '0')
	    tab[i][j] = '0';
	  else
	    tab[i][j] = verif(a, b, c);
	  j = j - 1;
	}
      i = i - 1;
    }
  return (tab);
}

char	**first_step(char **tab)
{
  int	i;
  int	j;

  i = pars_i(tab) - 1;
  while (i != 0)
    {
      j = pars_j(tab);
      while (j != -1)
	{
	  if (tab[i][j] == 'o')
	    tab[i][j] = 0 + '0';
	  else if (tab[i][j] == '.')
	    tab[i][j] = 1 + '0';
	  j = j - 1;
	}
      i = i - 1;
    }
  return (tab);
}

int	print_map(char **tab)
{
  int   i;

  i = 1;
  while (tab[i])
    {
      my_printf("%s", tab[i]);
      my_printf("\n");
      i = i + 1;
    }
}

int	main(int ac, char **av)
{
  int	res;
  int	check;

  if (ac == 2)
    {
      res = main2(ac, av);
      if (res != 0)
	return (84);
      else
	return (0);
    }
  else
    return (84);
}
