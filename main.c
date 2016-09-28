#include"test.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
  int	socket_id;
  char	c[250];
  char*	rL;
  int	port;

  //
  int i = 0;
  while (i < 250) {
    c[i] = '\0';
    i++;
  }
  //
  
  if (argc > 4 && my_strcmp(argv[1], "--ip") && my_strcmp(argv[3], "--port"))
    {
      port = my_getnbr(argv[4]);
      socket_id = create_connect (argv[2], port); 
      if (socket_id == -1) 
	return (-1);
      //rL = "unTest";
      while (1)
	{
	  rL = readLine();
	  if (my_strcmp(rL, "bye"))
	    {
	      return (-1);
	    }
	 
	  write(socket_id , rL, my_strlen(rL));
	  ret = read(socket_id, c, 12);
	  //c[ret] = '\0';
	  my_putstr(c);
	  free(rL);
	}
       
      close(socket_id); 
    }
  else
    {
      my_putstr("pas d'arguments ou pas les bons arguments");
    }
  return (0);
}
