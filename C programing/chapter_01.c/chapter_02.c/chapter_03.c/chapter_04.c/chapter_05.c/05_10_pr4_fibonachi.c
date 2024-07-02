#include<stdio.h>//hint:fib(n)= fib(n-1)+fib(n-2)  , fib(1)=0 and fib(2)=1

int fib(int x);
int main(){
    int n;
    printf("Enter the term number\n");
    scanf("%d", &n);
    printf("The %d th term of the fibonacci series is %d", n, fib(n));
    return 0;
}
int fib(int x){
    if(x==1){
        return 0;
    }
   else if(x==2)
{
    return 1;
}
else{
    return fib(x-2) + fib(x - 1);
}
}