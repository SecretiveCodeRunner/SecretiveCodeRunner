#include<stdio.h>

void sumAndAvg(int a , int b, int *sum, float *avg){
    *sum = a + b;
     *avg = (float) *sum / 2;
}
int main(){
    int i, j,sum;
    float avg;
    j = 6;
    i = 3;
    sumAndAvg(i, j, &sum, &avg);
    printf("The value of sum is %d \n", sum);
    printf("The value pf avg is %.2f \n", avg);
    return 0;
}//here with the help of pointers we can return the value through a void function indirectly which is normally impossible cause void does not return value