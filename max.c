#include <stdio.h>
int main(void) {
int x, y, z, max;
printf("provide 3 integers: ");
scanf("%d%d%d ", &x, &y, &z) ;
if (x > y)
max = x ;
else
max = y ;
if (z > max)
max = z ;
printf("The maximum value is %d\n", max);
}
