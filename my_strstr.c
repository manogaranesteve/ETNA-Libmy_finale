/*
** my_strstr.c for  in /users/stevemanogarane/Jour04/manoga_s/my_strstr
** 
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
** 
** Started on  Sat Oct 24 20:01:25 2015 MANOGARANE Steve »
** Last update Thu Oct 29 09:56:43 2015 MANOGARANE Steve »
*/

#include <stdio.h>

int	my_strncmp(char *s1, char *s2, int n);
int	my_strlen(char *str);

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	l;

  i = 0;
  l = my_strlen(to_find);
  while (str[i] != 0)
    {
      if (my_strncmp(str + i, to_find, l) == 0)
	{
	  return (str + i);
	}
      ++i;
    }
  return ("null");
}
