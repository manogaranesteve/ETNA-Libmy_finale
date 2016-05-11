/*
** my_strcmp.c for  in /Users/stevemanogarane/Jour04/manoga_s/my_strcmp
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Thu Oct 22 16:49:53 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:58:45 2015 MANOGARANE Steve »
*/

#include <stdio.h>

int	my_strcmp(char *s1, char *s2)
{
  int i;

  i = 0;
  while (s1[i] != '\0')
    {
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      i = i + 1;
    }
  if (s1[i] < s2[i])
    {
      return (-1);
    }
   if (s1[i] > s2[i])
    {
      return (1);
    }
  return (0);
}
