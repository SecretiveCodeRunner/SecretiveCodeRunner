#include<stdio.h>

int main(){
    //factorial(4) = 1*2*3*4
    int  i = 0,n, factorial=1;
   
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial *= i;
    }
    printf("The value of factorial %d is %d",n,factorial);
    return 0;
}