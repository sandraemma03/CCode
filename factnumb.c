//this program is to calculate  the factorial of a number
#include<stdio.h>
int factorial(int);
int main(void)

{

int n;
printf("hello please enter the number u wish to calculate its factorial\n");
scanf("%d",&n);
printf("the value of %d%s%d\n",n,"! is = ", factorial(n));

}
 int factorial(int n)
 
   {  
 
 int fact = 1;
 while (n > 0)
     {
 fact = fact * n;
 n -= 1;
    }
return fact;

   } 
  
