#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
 goodmorning();



    return 0;
}

void goodmorning(){
    printf("Good Morning Apurba\n");
     goodafternoon();
}
void goodafternoon(){
    printf("Good Afternoon Apurba\n");
     goodnight();
}
void goodnight(){
    printf("Good Night Apurba\n");
}