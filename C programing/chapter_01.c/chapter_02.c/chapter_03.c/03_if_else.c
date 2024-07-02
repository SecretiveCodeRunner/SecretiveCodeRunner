#include <stdio.h>

void main()
{
    int age;
    int vipPass = 0;
    vipPass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);

    // if (age<= 70 && age >=18)
    if ((age <= 70 && age >= 18) || vipPass == 1)
    {
        printf("You are above 18 and below 70, you can drive\n");
    }
    if (age >= 90)
    {
        printf("You are above 90, you cannot drive");
    }
    else
    {
        printf("You can drive\n");
    }
    if (age == 50)
    {
        printf("Half century\n");
    }
}