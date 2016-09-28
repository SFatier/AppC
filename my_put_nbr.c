/*
** my_put_nbr.c for my_put_nbr.c in /home/segolene/Piscine/DEVC/Lib
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Sun Mar 27 19:09:55 2016 Fatier Segolene
** Last update Sun Mar 27 20:45:50 2016 Fatier Segolene
*/
void    my_putchar(char c);
void    my_put_nbr(int nb)
{
  int   i;
  i = -1;
  if (nb == 0)
    {
      my_putchar('0');
      return ;
    }
  if (nb < 0)
    {
      my_putchar ('-');
      nb = nb * i;
    }
  if (nb < 9)
    {
      my_putchar(nb + '0');
      return ;
    }
  if (nb > 9)
    {
      my_put_nbr (nb / 10);
      my_putchar((nb % 10) + '0');
    }
}
