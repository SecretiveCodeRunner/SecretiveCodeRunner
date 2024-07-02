#include<stdio.h>

int main(){
    int i = 0;

    do{
        printf("The value of i is %d\n",i);
        i++;

    }while (i<10);
    return 0;
}//do while loop first print karega ekbaar fir check karega  condition.
//so if i take i=222 which does not satisfy condition but it will still print 222 then stop