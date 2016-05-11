/*
** my_str_to_wordtab.c for  in /Users/stevemanogarane/Jour07/manoga_s/my_str_to_wordtab
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Mon Oct 26 15:00:19 2015 MANOGARANE Steve »
** Last update Wed Nov 18 13:38:57 2015 MANOGARANE Steve »
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char	*my_strdup(char *str);

int	nb_mot(char *str)
{
  int   i;
  int   nb_mot;

  i = 0;
  nb_mot = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
          || (str[i] >= '0' && str[i] <= '9'))
        {
          nb_mot++;
          while (str[i] != '\0' && ((str[i] >= 'a' && str[i] <= 'z')
				    || (str[i] >= 'A' && str[i] <= 'Z')
				    || (str[i] >= '0' && str[i] <= '9')))
            i++;
        }
      i++;
    }
  return (nb_mot);
}

int	nb_char(char *str, int *i)
{
  int   nb_char;

  nb_char = 0;
  while (str[*i] != '\0' && ((str[*i] >= 'a' && str[*i] <= 'z')
			     || (str[*i] >= 'A' && str[*i] <= 'Z')
			     || (str[*i] >= '0' && str[*i] <= '9')))
    {
      nb_char++;
      *i = *i + 1;
    }
  return (nb_char);
}

char    **my_str_to_wordtab(char *str)
{
  int   i;
  int   n;
  int   mot;
  char  **tab;

  i = 0;
  n = 0;
  mot = nb_mot(my_strdup(str));
  tab = (char **)malloc(sizeof(char *) * mot);
  while (str[i] != '\0' && mot > 0)
    {
      if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
          || (str[i] >= '0' && str[i] <= '9'))
        {
          tab[n] = my_strdup(str + i);
          tab[n][nb_char(str, &i)] = '\0';
          n = n + 1;
          mot = mot - 1;
        }
      i = i + 1;
    }
  tab[nb_mot(my_strdup(str))] = NULL;
  return (tab);
}
