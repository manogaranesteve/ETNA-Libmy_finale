/*
** my_strdup.c for  in /Users/stevemanogarane/Jour07/manoga_s/my_strdup
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Mon Oct 26 13:20:48 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:59:29 2015 MANOGARANE Steve »
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);
int	my_strlen(char *str);

char	*my_strdup(char *str)
{
  char	*dest;

  dest = malloc((my_strlen(str) + 1) * sizeof(char));
  my_strcpy(dest,str);
  return (dest);
}
