/*
** my_strncmp.c for  in /Users/stevemanogarane/Jour04/manoga_s/my_strncmp
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Thu Oct 22 18:13:08 2015 MANOGARANE Steve »
** Last update Wed Nov 18 14:04:03 2015 MANOGARANE Steve »
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int i;

  i = 0;
  while (s1[i] != '\0' && i < n)
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
  if (s1[i] < s2[i] && i < n)
    {
      return (-1);
    }
  if (s1[i] > s2[i] && i < n)
    {
      return (1);
    }
  return (0);
}
