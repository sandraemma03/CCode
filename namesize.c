#include <stdio.h>
#include <ctype.h>
#define MAX 100
int main(void)
 
{
char c, name[MAX];
int i, sum = 0;
printf("\nHi! What is your name please? ");
for (i = 0; (c = getchar()) != '\n'; i++)

 {

 name[i] = c;
if (isalpha(c)) /*sum alphabetic characters*/
sum++;
 }

name[i] = 0; 

    printf("\nNice to meet you %s. Your name comprises %d letters. ",name, sum);

  printf("\nYour name spelled backwards is: ");
for (--i; i >= 0; --i)
  putchar(name[i]);   
  printf(".\n");

return 0;
}

