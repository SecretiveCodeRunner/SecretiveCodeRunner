#include<stdio.h>

void main()
{
	float x, t = 0, avg , c= 1;
	while(c<=100)
	{
		 printf("\n Enter any number");
		 scanf("%f",&x);
		 t=t+x;
		 x++;
	}
	avg=t/100;
	printf("\n Total= %f,\n Average = %f",t,avg);
}
