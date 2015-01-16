#include <stdio.h>
#define N 5
int main(void) {
float a[N], sum = 0, average;
int i;
/*assign numbers in the array*/
a[0] = 56.5; a[1] = 67.5; a[2] = 45; a[3] = 89; a[4] = 78;
/*compute the sum*/
for (i = 0; i < N; i++)
sum += a[i];
average = sum/N;
/*display required output*/
printf("\nThe %d numbers are: ", N);
for (i = 0; i < N; i++)
printf("%.2f ",a[i]); /*print all the numbers on one line*/
printf("\n\nThe sum of the numbers is %.2f", sum);
printf("\n\nThe average of the numbers is %.2f\n", average);
}
