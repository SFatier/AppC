/*
** my_getnbr.c for my_getnbr.c in //home/segolene/Piscine/DEVC/Libmy_02/fatier_s/libmy_03
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Tue Mar 29 20:39:54 2016 Fatier Segolene
** Last update Thu Mar 31 17:27:34 2016 Fatier Segolene
*/
#include<unistd.h>

void	my_putchar(char c);
void	my_put_nbr(int n);

int     my_getnbr(char *str)
{
  int   a;
  int	number;
  int	sign;

  a = 0;
  number = 0;
  sign = 1;
  if (str == NULL)
    return (0);
  while (str[a] == '+' || str[a] == '-')
    {
      if (str[a] == '-')
	sign = sign * -1;
      a = a + 1;
    }
  while (str[a] != 0 && (str[a] >= 48 && str[a] <= 57))
    {
      number = number * 10;
      number = (number + str[a]) - 48;
      str = str + 1;
    }
  number = number * sign;
  return (number);
}
