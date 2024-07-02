#include<stdio.h>

int main(){
    int physics,chemistry,maths;
    float total;
    printf("Enter physics marks\n",physics);
    scanf("%d",&physics);
    printf("Enter chemistry marks\n",chemistry);
    scanf("%d",&chemistry);
    printf("Enter maths marks\n",maths);
    scanf("%d",&maths);
    total = (physics+ maths + chemistry)/3;
    if((total<40)|| physics<33||chemistry<33||maths<33){
        printf("Your total percentage is %f and you are failed\n",total);

    }
    else{
        printf("Your total percentage  is %f and you are passed \n",total);
    }


    return 0;
}