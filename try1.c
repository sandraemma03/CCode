#include <stdio.h>
#include <stdlib.h>
int main(void) {
int *a, i, n, sum = 0;
printf("\nEnter the size of the array you want to create: ");
scanf("%d",&n);
printf("\nEnter %d integers: ", n);
a = calloc(n, sizeof(int));
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for (i = 0; i < n; i++)
sum += a[i];
free(a); /*free the space that was allocated to the array*/
printf("\nSum: %d\n", sum);
}
