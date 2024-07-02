#include<stdio.h>

int main(){
    float num1, num2, num3, num4;
    printf("Enter the first number\n");
    scanf("%f", &num1);
    printf("Enter the second number\n");
    scanf("%f", &num2);
    printf("Enter the third number\n");
    scanf("%f", &num3);
    printf("Enter the fourth number\n");
    scanf("%f", &num4);
    if(num1>=num2 && num1>=num3&&num1>=num4)
        printf("%f is the largest number among the given numbers\n", num1);
    if (num2 >= num1 && num2 >= num3 && num2 >= num4)
        printf("%f is the largest number among the given numbers\n", num2);
    if (num3 >= num2 && num3 >= num1 && num3 >= num4)
        printf("%f is the largest number among the given numbers\n", num3);
    if (num4 >= num2 && num4 >= num3 && num4 >= num1)
        printf("%f is the largest number among the given numbers\n", num4);

    return 0;
}