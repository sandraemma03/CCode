#include <stdio.h>
void main()
{
int n,i,x,a[10],poly=0;
printf("\n Enter the degree of the polynomial : ");
scanf("%d",&n);
printf("\n Enter the %d coefficients\n",n+1);
for(i = 0 ; i <= n ; i++)
{
scanf("%d",&a[i]);
}
printf("\n Enter the value of x :");
scanf("%d",&x);
poly=a[0];
for(i = 1 ; i <= n ; i++)
{
poly = poly* x+a[i];
}
printf("\n The sum of polynomial = %d",poly);
}
