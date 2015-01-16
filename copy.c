#include <stdio.h>
#include <stdlib.h>
int main()
{
int c;
FILE *in, *out;
 in = fopen("copy.in","r");
 out = fopen("bar.out","w");

while((c = fgetc(in)) != EOF)
  fputc(c,out);
exit(0);
}

