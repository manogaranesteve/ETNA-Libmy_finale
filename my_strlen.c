/*
** my_strlen.c for  in /Users/stevemanogarane/Jour03/manoga_s/my_strlen
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Wed Oct 21 10:21:50 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:59:51 2015 MANOGARANE Steve »
*/

int	my_strlen(char *str)
{
  int    i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
