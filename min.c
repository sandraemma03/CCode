#include<stdio.h>
int main(void)
{
int x, y, z, min;
printf(" enter three different integers: ");
scanf("%d%d%d",&x ,&y ,&z);
if(x < y)
 min = x;
else
min = y;
if(z < min)
 min = z;
printf("the minimum value of the three integers is :%d\n", min);
return 0;
}
  
