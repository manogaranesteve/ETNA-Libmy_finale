/*
** my_getnbr.c for  in /Users/stevemanogarane/Libmy/manoga_s/libmy_finale
**
** Made by MANOGARANE Steve »
** Login   <manoga_s »@etna-alternance.net>
**
** Started on  Mon Apr 18 12:45:35 2016 MANOGARANE Steve »
** Last update Mon Apr 18 12:46:08 2016 MANOGARANE Steve »
*/

int	my_getnbr(char *str)
{
  int	i;
  int	parite;
  int	result;

  i = 0;
  parite = 0;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	{
	  parite++;
      	}
      i++;
    }
  result = 0;
  while (str[i] <= '9' && str[i] >= '0')
    {
      result = result * 10 + (str[i] - 48);
      ++i;
    }
  if (parite % 2 == 1)
    {
      result *= -1;
    }
  return (result);
}
