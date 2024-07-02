#include<stdio.h>

int main(){
    int a=3;
    printf("%d %d %d", a,++a,a++);//compiler takes the argument from right to left
    return 0;//run the program and you will see what it means
}