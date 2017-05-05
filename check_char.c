/*
** check_char.c for check_char in /home/DoWdoX/PROJECT/CPE/CPE_2016_BSQ
** 
** Made by DORIAN DEBOUT
** Login   <DoWdoX@epitech.net>
** 
** Started on  Thu Dec 15 16:46:49 2016 DORIAN DEBOUT
** Last update Fri Dec 16 14:35:17 2016 DORIAN DEBOUT
*/

#include "./include/my.h"

int	check_char(char **tab)
{
  int   i;
  int   j;

  i = 1;
  while (tab[i])
    {
      j = 0;
      while (tab[i][j])
	{
	  if (tab[i][j] != '.' || tab[i][j] != 'o' || tab[i][j] != ' ' || tab[i][j] != '\n')
	    return (1);
	  else
	    j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}

int             main2(int ac, char **av)
{
  int           fd;
  char          *buf;
  char          **tab;
  struct stat   sb;
  int           check;

  stat(av[1], &sb);
  buf = malloc(sizeof(char) * (sb.st_size));
  fd = open(av[1], O_RDONLY);
  if (fd == -1)
    return (84);
  else
    {
      read(fd, buf, sb.st_size);
      tab = malloc(sizeof(char) * (sb.st_size));
      tab = str_wordtab(buf);
    }
  //check = check_char(tab);
  //if (check == 1)
  //return (84);
  tab = all(tab);
  return (0);
}
