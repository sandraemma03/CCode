#include <stdio.h>
int main(int argc, char *argv[])
{
int i;
printf("argc = %d\n",i, argc);
for (i=0; i<argc; i++)
printf("argv[%d] = %s\n",i, argv[i]);
}
