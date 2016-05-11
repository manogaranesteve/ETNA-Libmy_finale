/*
** my_strncpy.c for  in /Users/stevemanogarane/Jour04/manoga_s/my_strncpy
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Thu Oct 22 12:01:44 2015 MANOGARANE Steve »
** Last update Wed Nov 18 14:04:22 2015 MANOGARANE Steve »
*/

#include <stdio.h>

int	my_strlen(char *str);
char	*my_strncpy(char *dest,char *src, int n)
{
  int	i;
  int	l;

  i = 0;
  l = my_strlen(src);
   while (src[i] != '\0' && i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
   if (l < n)
     {
       dest[i] = '\0';
     }
  return (dest);
}
