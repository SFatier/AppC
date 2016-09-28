#include <sys/types.h> 
#include <sys/socket.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <unistd.h> 
#include <netinet/in.h> 
#include <netdb.h>

void	my_putchar(char c);
void	my_putstr(char *str);
int	create_connect(const char *hostname, int port);
char	*readLine();
int	my_strlen(char *str);
int	my_getnbr(char *str);
void    my_put_nbr(int nb);
int	my_strcmp(char *s1, char *s2);
