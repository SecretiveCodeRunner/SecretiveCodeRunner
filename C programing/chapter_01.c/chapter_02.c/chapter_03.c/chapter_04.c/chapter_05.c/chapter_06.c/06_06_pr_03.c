#include<stdio.h>

 void multiplyByTen(float *num){
     *num = (float) 10 * *num;
 }
int main(){
    float n;
    printf("Enter the  number \n");
    scanf("%f", &n);
    printf("The number before multiply is %f\n", n);
    multiplyByTen(&n);
    printf("The number after multiply is %f", n);
    return 0;
}