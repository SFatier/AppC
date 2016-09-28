/*
** my_strlen.c for my_strlen.c in /home/segolene/Piscine/DEVC/Lib
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Sun Mar 27 19:30:19 2016 Fatier Segolene
** Last update Sun Mar 27 19:32:15 2016 Fatier Segolene
*/
int	my_strlen(char *str)
{
 int j;
 j = 0;
 while (str[j] != '\0')
 {
  j = j +1;
 }
 return (j);
}
