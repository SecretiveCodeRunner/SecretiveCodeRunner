#include<stdio.h>

int main(){
    int i = 5;
    printf("The value after i++ is %d\n",i++);
    printf("The value after i++ is %d\n", ++i);
    i++;//---> pehle print fir increment
    ++i;//--> pehle increment fir print kare
    printf("The value of i is %d \n",i);
    i+=10;//--> increaments i by 10
    printf("The value of i is %d \n",i);
    return 0;
}