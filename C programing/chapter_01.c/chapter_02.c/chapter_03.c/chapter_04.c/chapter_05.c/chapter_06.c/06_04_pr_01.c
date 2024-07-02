#include<stdio.h>

int main(){
    int a=6;
    int *ptr;
    ptr = &a;
    printf("The value of the variable a  is %d\n", a);
    printf("The address of the variable a  is %u\n", ptr);
    printf("The value of the variable a  is %d\n", *ptr);
    return 0;
}