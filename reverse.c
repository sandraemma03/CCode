//prints a two-digit number in the reversed order
#include<stdio.h>
int main(void)
{
int number,reversal,a,b,ab;
printf("enter a two-digit number: ");
scanf("%d",& number);
	a = number%10;
	b = number/10;
	
printf("The reversal is: %d%d",a,b);
return 0;
}

