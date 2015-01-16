//this program swaps two numbers
#include<stdio.h>
swap(int *, int *);
int main(void)

{

int x , y , a , b;

printf("hey welcome \n");

printf("To swap two numbers enter the numbers here\n");

scanf("%d%d",&a ,&b);

printf("ie x = %d\n",a);

printf("ie y = %d\n",b);

swap(&x , &y); //swapping takes place here

printf("the result after the swap of x and y is:\n");

printf("x = %d\n",b);

printf("y = %d\n",a);

}

 int swap(int *p, int *q) // calling the swap function
    {
 int tmp;  //tmp refers to the temporal storage
 tmp = *p; //tmp takes the value of p
 *p = *q; //p takes the value q had 
 *q = tmp; // q take the value of tmp which was originally the value of p
    }
