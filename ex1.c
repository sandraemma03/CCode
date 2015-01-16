#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(char* argc, char* argv[])

{
int a,b;
//int (a+b);
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d%d%d is  the sum of intergers\n",a,b,a+b);
return 0;
}
