// #include<stdio.h>

// int main(){
//     int length=3,breadth=8;
//     int area = length*breadth;
//     printf("The area of this rectangle is %d",area);
//     return 0;
//}

#include<stdio.h>

int main(){
    int length,breadth;
    printf("What  is the length of the rectangle\n");
    scanf("%d",&length);

    printf("What  is tlhe breadth of the rectangle\n");
    scanf("%d",&breadth);
    printf("The area of your rectangle is %d",length*breadth);
    return 0;
}
