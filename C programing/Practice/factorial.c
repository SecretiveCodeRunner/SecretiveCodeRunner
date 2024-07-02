#include<stdio.h>

 void main()
 {
 	  int x,f=1,i=1;
 	  printf("\n Enter any number \n");
 	  scanf("%d",&x);
 	  if(x==0)
 	       printf("\n The value of the factorial = 1");
 	  else{
 	  	  while(i<=x)
 	  	  {
 	  	  	f=f*i;
 	  	  	i++;
			 }
			 printf("\n The value of the factorial = %d",f); 
	   }
 } 
