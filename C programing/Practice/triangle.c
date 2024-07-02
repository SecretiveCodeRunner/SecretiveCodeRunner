#include<stdio.h>

 int main()
 
 {
 	 float angle1,angle2,angle3,sum;
 	 sum=angle1+angle2+angle3;
 	 printf("\n input 3 angles in degree\n");
 	 scanf("%f%f%f",&angle1,&angle2,&angle3);
 	 if( angle1>0&&angle2>0&&angle3>0&& sum==180 )
 	   printf("\n The Triangle is valid");
 	   else
 	       printf("\n The Triangle is invalid");
 	       return 0;
 }
