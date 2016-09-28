/*
** my_putchar.c for my_putchar.c in /home/segolene/Piscine/DEVC/Lib
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Sun Mar 27 19:00:56 2016 Fatier Segolene
** Last update Sun Mar 27 19:01:46 2016 Fatier Segolene
*/
#include <unistd.h>
void	my_putchar(char c)
{
 write(1, &c, 1);
}
