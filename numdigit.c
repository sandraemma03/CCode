//this program checks out the number of digits an inputed number has
#include<stdio.h>
int main(void)
{
int number;
printf("enter a number (not more than 4 digits) \n");
scanf("%d",& number);

if (number >= 0 && number <= 9)
{
printf("the number you entered has one-digit\n");
}
if (number >= 10 && number <= 99)
{
printf("the number you entered has two-digits \n");
}
if (number >= 100 && number <= 999)
{
printf("the number you entered has three-digits \n");
}
if (number >= 1000 && number <= 9999)
{
printf("the number you entered has four-digits \n");
}
 else
printf("the number is not in the range given");
return 0;
}
