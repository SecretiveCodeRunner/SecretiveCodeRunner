#include <stdio.h>
#include <math.h>

int main()
{
  int a = 4;
  int b = 8;
  int z = b * a; // we cant write b*a = z .it is illegal. we have to follow the process
  printf("The value of  a+b is : %d\n", a + b);
  printf("The value of z is :%d\n", z);
  printf("The value of  a-b is : %d\n", a - b);
  printf("The value of  a*b is : %d\n", a * b);
  printf("The value of  a/b is : %d\n", a / b);

  printf("5 when devided by 2 leaves a remainder of %d\n", 5 % 2);
  printf("-5 when devided by 2 leaves a remainder of %d\n", -5 % 2);
  printf("5 when devided by -2 leaves a remainder of %d\n", 5 % 2);
  // No operature is assumed here

  // int i = ab (invalid)
  // int i = a*b (valid)

  // printf("The value of 4*5 is %d\n",(4)(5));-->> wil not return 20 / wrong !!!
  printf("The value of 4*5 is %d\n", (4) * (5));

  // There is no operator to perform exponentiation in c
  //  printf("The value of 4^5 is %d\n", 4^5);//--->>will not produce 4 to the power 5
  float base;
  int power;

  printf("Enter the base");
  scanf("%f", & base);
  printf("Enter the power");
  scanf("%d", &power);
  printf("The value of %f to the power %d is %f\n",base,power, pow(base,power));
  // pow helps you to find x power to the y

  printf("The value of 8+6 is %d\n", 8 + 6);
  printf("The value of 8+6.56 is %f\n", 8 + 6.56);
  printf("The value of 8.12+6.63 is %f\n", 8.12 + 6.63);
  printf("The value of 3.0/9 is %f\n", 3.0 / 9);
  return 0;
}
