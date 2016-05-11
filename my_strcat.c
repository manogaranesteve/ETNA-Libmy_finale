/*
** my_strcat.c for  in /Users/stevemanogarane/Jour04/manoga_s/my_strcat
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Thu Oct 22 18:19:37 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:39:46 2015 MANOGARANE Steve »
*/

char	*my_strcat(char *str1, char *str2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;

  while (str1[i] != '\0')
    {
      i = i + 1;
    }

  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      j = j + 1;
      i = i + 1;
    }
  str1[i] = '\0';
  return (str1);
}
