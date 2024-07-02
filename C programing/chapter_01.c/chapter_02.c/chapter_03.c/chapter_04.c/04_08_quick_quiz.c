#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for (int i=n;i;i--){//i is true for nonzero, it will print frm n to 1
        printf("The value of i is %d\n",i);
    }
    return 0;
}