#include <stdio.h>
#include<string.h>
void main()
{
char c[50];
int I;
printf("Enter the text");
scanf(“%[^\t\n]”, c);
for(i=0;c[i]!='\0';i++)
{
if (c[i]==' ')
printf(“%c”, c[i]);
while (c[i]==' ')
i++;
printf(“%c”, c[i]);
}
}
