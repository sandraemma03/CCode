//THIS PROGRAM WILL CALCULATE YOUR AGE WHEN A YEAR IS INPUTED for the year 2013
#include<stdio.h>
int main(void)
{
int age,year;
printf("hello\n");
printf("please enter your year of birth\n");
scanf("%d",&year);
age = 2013 - year;
printf("your age for the year 2013 is, %d",age);
return 0;
}
