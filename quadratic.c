//this prigram computes the values of a quadratic eqn of degree 2
#include<stdio.h>
#include<math.h>
int main(void)
{
int a,b,c,i;
float x1,x2,y,z;

	 double pow(double y, double i);

printf("please enter the value of the coeficient of x*x(a)\n");
scanf("%d",& a);
printf("enter the value of the coeficient of x(b)\n");
scanf("%d",& b);
printf("enter the value of c\n");
scanf("%d",& c);

	 y = ((b*b) -4*(a*c));
	 z = pow(y, 0.5);
	 x1 = (-(b) + (z))/2*a;
	 x2 = (-(b) - (z))/2*a;
	 
printf("the value of x1 is %f\n", x1);
printf("the value of x2 is %f\n", x2);
return 0;	 
}
