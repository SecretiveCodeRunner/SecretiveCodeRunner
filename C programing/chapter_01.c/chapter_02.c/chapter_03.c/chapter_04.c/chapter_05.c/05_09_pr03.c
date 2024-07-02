#include<stdio.h>
float force(float mass);

int main(){
    float m;
    printf("enter the value of mass in kgs \n");
    scanf("%f", &m);
    printf("The value of force in SI unit is %.2f newton \n", force(m));//.1 makes the answer upto 1 decimal .0 would only print the number without decimal
    return 0;
}
float force(float mass){
    float result = mass * 9.8;
    return result;
}