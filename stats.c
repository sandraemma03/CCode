#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stats.h"
int MAXIMUM;
{
 return (Number) (1.0 * MAXIMUM * rand ()/RAND_MAX);
 }
main(int arg c ,char *argv[])
{

 int i,MAX,N = atio(argv[1]);
 float m1 = 0.0, m2 = 0.0;
 Number x;
 MAX = atio(argv[2]);
 for (i = 0; i < N; i++)
 {
  x = randNum(MAX);
  printf("%.2f", x);
  m1 += ((float) x)/N;
  m2 += ((float) x*x)/N;
  }
  
  printf("\n");
  prinft("      Average: %f\n", m1);
  printf("Std.deviation: %f\n",sqrt(m2 - m1 * m1));
  
}  
