#include<stdio.h>
#include<conio.h>

void main()
{
	 float celcius,far;
	 
	 printf("Enter the value of the temperature in celcius scale\n",celcius);
	 scanf("%f",&celcius);
	 far = (celcius* 9/5)+ 32;
	 printf("The value of this celcius temperature in farenheit is %f", far);
	 getch();
}
