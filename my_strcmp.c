/*
** my_strcmp.c for my_strcmp.C in /home/segolene/Piscine/DEVC/Lib
** 
** Made by Fatier Segolene
** Login   <fatier_s@etna-alternance.net>
** 
** Started on  Sun Mar 27 19:47:56 2016 Fatier Segolene
** Last update Thu Mar 31 17:26:32 2016 Fatier Segolene
*/
int	my_strcmp(char *s1, char *s2)
{
 int j;
 j = 0;
 while (s1[j] == s2[j] && s1[j] != '\0' && s2[j] != '\0')
 {
  j = j + 1;
  if (s1[j] == '\0' && s2[j] == '\0')
  {
   return (0);
  }
  else if (s1[j] < s2[j])
  {
   return (-1);
  }
  else
  {
   return (1);
  }
 }
 return (0);
}
