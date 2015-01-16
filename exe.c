#include<stdio.h>
#include<stdlib.h>
int i,d;
int array[20]; //creating an array of 100 cells
void add(void);
int main(void)

{

void add(void)
	{
for(i=5;i<15;i++)

array[i]=rand()%20;
	}

	printf("Step 1\n");
	for(i=1;i<21;i++)
    {
         array[i]=-1;
	   //creating an array of size 20 with initialisation of cells with -1
	printf("array[%d]%d \t", i,array[i]);
	
	}
printf("\n\n");	

	printf("Step 2\n");
	
	array[i]=20;
	
	for(i=1;i<21;i++)  //stores 20 randomly genrated numbers in the 1st 20 cells
   {	
        array[i]=rand()%100;
	
	printf("array[%d] %d \t",i,array[i]);
   }	
printf("\n\n");

	printf("Step 3\n");
	
       for(i=1;i<5;i++)
       {
        printf("array[%d]%d \t",i,array[i]);
	}

       
return 0;
}
