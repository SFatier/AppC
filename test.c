#include"test.h"

int			create_connect (const char *hostname, int port) 
{ 
  struct hostent	*host_address; 
  struct sockaddr_in	sockname;  
  int			socket_id;
  
  if ((host_address = gethostbyname (hostname)) == NULL) 
    {
      my_putstr("Impossible d’identifier la machine, regarde ton hostname...\n");
      return (-1); 
    }
  if ((socket_id = socket (PF_INET, SOCK_STREAM,IPPROTO_TCP)) ==  -1) 
    {
      my_putstr("Impossible de créer une socket\n"); 
      return (-1);
    }
  sockname.sin_addr.s_addr = inet_addr(host_address);
  sockname.sin_family = AF_INET; 
  sockname.sin_port = htons (port);  
  if ((connect(socket_id, (struct sockaddr *) &sockname, sizeof(struct sockaddr_in))) == -1) 
    {
      my_putstr("Impossible de connecter la socket au serveur, regarde ton hostname...\n "); 
      return (-1); 
    } 
  return (socket_id);
}
