//this program prints a tree shape

#include <stdio.h>
int main(void)
{
int a,i,j,z,N=4;

   for(i=0; i<=N; i++)
  {
	printf("\t * \n");
  }
   for(j=0; j<=N; j++)
   {
	printf(" *\v \n");
    }
   for(z=2; j<=N; j++)
   {
	printf("\t * \n");
   }
return 0;
}
