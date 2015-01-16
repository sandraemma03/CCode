//student activity by teacher
#include<stdio.h>
#include<stdlib.h>
int i,d;
int array[100];
void delete(void);
void add(void);
int main(void)

{

void add(void)
	{
for(i=5;i<15;i++)

array[i]=rand()%100;
	}

	printf("Step 1\n");
	for(i=1;i<101;i++)
    {
         array[i]=-1;
	   //creating an array of size 100 with initialisation of cells with -1
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
	
       for(i=1;i<22;i++)
       {
        printf("array[%d]%d \t",i,array[i]);
	}
	
printf("\n\n");

 	printf("Step 4\n");
	

	
	for(i=25,d=16;i<31;i++,d++)
	
	{
	
	array[i]=array[d];
	
	}
	
	
	
	for(i=16,d=6;i<26;i++,d++)
	
	{
	array[i]=array[d];
	}
	
	add();
	
	for(i=1;i<31;i++)
	
	{
	
	printf("array[%d]%d \t",i,array[i]);
	}

printf("\n\n");

	printf("Step 5 \n");
	
	void delete(void)
	{
	
        for(i=16;i<21;i++)
    
        array[i]=rand()%100;  
        }
        
        delete();
        
        for(i=16,d=21;i<27;i++,d++) 
        {
        array[i]=array[d];
        }
        
        for(i=1;i<26;i++)
       {
        
        printf("array[%d]%d \t",i,array[i]);
          }

printf("\n\n");
          
          printf("final step \n");
          
          for(i=26;i<31;i++)
          
          {
           array[i]=-1;
           }
              for(i=1;i<31;i++)
       {
        
        printf("array[%d]%d \t",i,array[i]);
          }
          
printf("\n\n");

return 0;
}

