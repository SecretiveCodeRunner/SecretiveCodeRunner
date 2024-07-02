#include<stdio.h>

int main(){
    int i,n,m;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("*****The multiplication table of %d *****\n\n", n);
    for (int i = 10; i;i--){
        m = n * i;
        printf("%d*%d =%d\n\n ", n, i,m);
    }
        return 0;
}