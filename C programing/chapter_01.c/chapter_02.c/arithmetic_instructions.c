#include<stdio.h>
#include<conio.h>
#include<math.h>

    void main()
	{
    	int a=4
    	;
    	int b=8;
    	int z= b*a;
    	
    	printf("The value of a+b is %d\n",a+b);
    	printf("The value of a-b is %d\n", a-b);
    	printf("The value of z is %d\n",z);
    	printf("The value of a/b is %f\n",a/b);
    	
    	printf(" 5 when devided by 2 leaves a remainder of %d\n",5%2);
    	printf("-5  when devided by 2 leaves a remainder of %d\n", -5%2);
         printf("5 when devided by -2 leaves a remainder of %d\n",5%2);
    
    
     printf("The value of 4*5 is %d\n",(4)*(5));//>>>>>(4)(5) will not return 20 please note that!!!!!
     
     
     printf("The value of 4 to the power 5 is %f\n",pow(4,5));//>>>> pow helps us to find the x to the power y and this comes from the header file math.h
    
     
      printf("The value of 8+6 is %d\n",8+6);
      printf("The value of 8+6.56 is %f\n",8+6.56);
      printf("The value of 8.12+6.63 is %f\n",8.12+6.63);
      printf("The value of 3.0/9 is %f\n",3.0/9);
       getch();
	}
