#include <stdio.h>
#include <math.h>
int main(void)
{
int a,b,c;
float d,x1,x2,r;
printf("Enter the three co-efficient :\n");
scanf("%d%d%d",&a,&b,&c);
}

if ((a* b* c) == 0)
 {
printf("\n Invalid Input ");
 }
else
{

d = b * b - 4 * a * c;
r=sqrt(fabs(d));
if ((d) > 0)
 {

x1 = (-b +r) / (2.0*a);
x2 = (-b -r) / (2.0*a);
printf("\n The roots are real and distinct\n");
printf("\n The roots are \n 1) x1=%f\t\t \n 2) x2=%f",x1,x2);
 }

else if ((d) == 0)
{

x1 = x2 = -(b)/(2.0*a);
printf("\n The roots are real and equal\n");
printf("\n The roots are: \n 1) x1=x2=%f",x1);
 }

else
{

x1 = -(b )/ (2.0 * a);
x2 = r / (2.0*a);
printf("\n The roots are real and imaginary\n");
printf("\n The roots are:\n 1) %f +i %f \t\t\n 2) %f –i %f ",x1,x2,x1,x2);
}
return 0;
}
