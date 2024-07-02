#include<stdio.h>

int main(){
    int principle;
    float rate;
    float years;
    printf("Enter the principle amount \n");
    scanf("%d", &principle);
    printf("Enter the rate of interest\n");
    scanf("%f", &rate);
    printf("Enter the interest time in years\n");
    scanf("%f", &years);
    int simpleInterest = (principle*rate*years)/100;
    printf("The value of simple Interest is %d ",simpleInterest);
    return 0;
}