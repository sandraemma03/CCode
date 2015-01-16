#include<stdio.h>
int i,r,array[100];
void delete(void);
 void add(void);
void add(void){
	for(i=5;i<15;i++){
	array[i]=rand()%1000;
	}
	}
	
void delete(void){
	int r;
	for(i=15,r=20;i<26;i++,r++){
	array[i]=array[r];
		}
	}
	
int main()
	{
		
	printf("Initialised cell to -1.\n");
		for(i=0;i<100;i++){
		array[i]=-1;
		printf("array[%d]=%d \t",i,array[i]);
		}
	
	printf("\n\n");
	
		for(i=0;i<20;i++){
		array[i]=rand()%1000;
		}
	
	printf("First 20 cell initialise to random intergers.\n");
		for(i=0;i<=20;i++){
		printf("%d  \t",array[i]);
		}
	printf("\n\n");
	
		for(i=25,r=15;i<30;i++,r++){
		 array[i]=array[r];
		}
		
		for(i=15,r=5;i<25;i++,r++){
		array[i]=array[r];
		}
	add();
	
	printf("Array after adding.\n");
		for(i=0;i<30;i++){
		printf("%d \t",array[i]);	
		}
	printf("\n\n");
	
	delete();
	
	printf("Array after deleting.\n");
		for(i=0;i<25;i++){
		printf("%d \t",array[i]);	
		}
	printf("\n\n");
	
		for(i=25;i<30;i++){
		array[i]=-1;
		}

printf("Final array after filling the gaps with -1.\n");
		for(i=0;i<30;i++){
		printf("%d \t",array[i]);	
		}
	}
