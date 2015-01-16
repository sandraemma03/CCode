#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "point.h"

//float distance(float,float);
float randFloat()/*random number between 0 and 1 for x or  y coordinate*/
{return 1.0 * rand()/RAND_MAX;}

main(int argc,char *argv[]){
	float d;
	int i,j,cnt,N;
	printf("Enter N : \n");
	scanf("%d",&N);
	printf("Enter distance d: \n");
	scanf("%f",&d);
	/*Enter declaration of array a here */
	float a[N];
	for(i=0;i<N;i++){
	/*generate random point and store in array a*/
	a[i]=randFloat();
	}
	
	for(i=0;i<N;i++)
		for(j=i+1;j<N;j++){
		/*Compare distance between two point with d and update cnt if necessary*/	float t,r;
		t=a[i];
		r=a[j];
		if(distance(t,r)<d){
		cnt++;
		}
		}
printf("%d edges shorter than %.2f\n",cnt,d);
}
