#include<stdio.h>

int main(){
    int i, n, m, s=0;
    printf("Enter the number\n");
    scanf("%d", &n);
    printf("*****The multiplication table of %d *****\n\n", n);
    for (int i =1; i<=10; i++)
    {
        m = n * i;
        s += m;
        printf("%d*%d =%d \n", n, i, m);
    }
    printf("The sum of the multiplication table of %d is %d", n, s);
    return 0;
}