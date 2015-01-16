#include <stdio.h>

#include <stdlib.h>


int main()

{
   if ((write(1, "here is some data\n", 18)) != 18)
    
  write(2, "a write error has occured on the file descriptor 1\n", 46);
  

   exit(0);

}
