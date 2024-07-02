#include<stdio.h>

int main(){
    int a;
    printf("Enter the first number\n");
    scanf("%d", &a);
    while(a<10){
        // a=11;
        //while (a>10){---> This two will lead to an infinite loop
        printf("%d\n",a);
        a++;
        }    return 0;
}
