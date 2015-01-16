#include <stdio.h>
int factorial(int);
int main(void) {
int n = 5;
printf("Before entering the function, the value of n is %d\n",n);
printf("%d%s%d\n",n,"! = ", factorial(n));
printf("After the function call, the value of n is %d\n",n);
}
int factorial(int n) {
int fact = 1;
printf(" On entering the function, the value of n is %d\n",n);
while (n > 0) {
fact = fact * n;
n -= 1;
printf(" Current value of n is %d\n",n);
}
printf(" On leaving the function, the value of n is %d\n",n);
return fact;
}

