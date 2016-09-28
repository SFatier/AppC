/*
** my_putstr.c for my_putstr.c in /home/segolene/Piscine/DEVC/Lib
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Sun Mar 27 19:26:01 2016 Fatier Segolene
** Last update Tue Mar 29 18:43:41 2016 Fatier Segolene
*/
#include "test.h"

void	my_putstr(char *str)
{
 int j;

 j = 0;
 while (str[j] != '\0')
 {
  my_putchar(str[j]);
  j++;
 }
}
