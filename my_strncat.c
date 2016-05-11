/*
** my_strncat.c for  in /users/stevemanogarane/Jour04/manoga_s/my_strncat
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Sat Oct 24 18:35:35 2015 MANOGARANE Steve »
** Last update Wed Nov 18 14:02:48 2015 MANOGARANE Steve »
*/

#include <stdio.h>

char	*my_strncat(char *str1, char *str2, int n)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str1[i] != '\0')
    {
      i = i + 1;
    }
  while(str2[j] != '\0' && j < n)
    {
      str1[i] = str2[j];
      j = j + 1;
      i = i + 1;
    }
  str1[i] = '\0';
  return (str1);
}


