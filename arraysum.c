#include <stdio.h>
#define N 50
int sum(int a[], int);
int main(void) {
int a[N];
int i;
for (i = 0; i < N; i++)
a[i] = i;
printf("\nSum: %d\n", sum(a, N));
}
int sum(int a[], int n) {
int i, s = 0;
for (i = 0; i < n; i++)
s += a[i];
return s;
}
