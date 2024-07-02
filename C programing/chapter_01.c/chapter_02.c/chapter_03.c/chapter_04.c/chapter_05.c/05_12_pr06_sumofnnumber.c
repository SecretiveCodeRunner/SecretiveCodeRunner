#include<stdio.h>

int sumn(int x);
int main(){
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    printf("The sum of first n natural numbers is %d", sumn(n));
    return 0;
}
int sumn(int x){
    if(x==1){
        return 1;
    }
    else{
        return x +sumn(x - 1);
    }
}