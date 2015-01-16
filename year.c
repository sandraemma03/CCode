//this program will determine your year of birth when you will input your age
#include<stdio.h>
int main(void)
{
int year, age;
printf("please enter your age here,\nwe want to determine your year of birth\n");
scanf("%d",& age);
year = 2013 - age;
printf("your year of birth from the age given is,%d",year);
return 0;
}
