//this outputs a tree shape
#include <stdio.h>
#include <stdlib.h>     
int main()
{

int i,j,a,b,c;
printf("this program will output a tree shape");
     
     for(i=1; i<=5; i++)
     for(j=1; j<=i; j++)
   {
	printf(" *\n");
   }

        printf("");
   for( i=5; i>=1; i--)

   for(j=1; j<=i; j++)
   {
	printf(" *\n");
    }
return 0;
}
