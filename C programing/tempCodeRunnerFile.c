#include<stdio.h>
 
   void main(){
   	     
   	     
   	     
   	     int x,r,t=0;
   	     printf("\nEnter any number ",x);
   	     scanf("%d",&x);
   	     
   	     while(x>0)
   	     {
   	     	  r = x%10;
   	     	  t= t+r;
			}
			printf("The total number of digits = %d",t);
			
   }