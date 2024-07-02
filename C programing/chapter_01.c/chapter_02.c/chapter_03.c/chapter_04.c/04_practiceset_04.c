#include<stdio.h>

int main(){
    // Disclaimer: This is not the best method to solve this problem
    int i,n,prime =1;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0 ){
            prime = 0;
            break;
        }
    }
    if(prime == 0 ){
        printf("This is not a prime number\n");
    }
    else{
        printf("This is a prime number\n");
    }
    return 0;
}