#include <stdio.h>
void main()
{
int n,rev=0,rem,a;
printf("Enter a number : ");
scanf("%d",&n);
a = n;
if(n<=999 || n>9999)
{
printf(“ Not a 4 digit number\n”);
exit(0);
}
while(n != 0)
{
rem=n%10;
rev= rev*10+rem;
n = n / 10;
}
if(a==rev)
printf("\n The given Number %d is Palindrome",a);
else
printf("\n The given Number %d is not Palindrome",a);
}
