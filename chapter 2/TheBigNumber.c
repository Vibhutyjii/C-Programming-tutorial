#include<stdio.h>

int main()
{
    /* Write a program to print the smallest number of two. */

    float a,b;

    printf("\n The first number  : ");
    scanf("%f",&a);

    printf("\n The second number : ");
    scanf("%f",&b);

    if (a > b) {
        printf("%f  is the bigger one.",a);
    }
    else if (a < b) {
        printf("%f  is the bigger one.",b);
    }
    else if (a == b){
        printf(" Both are Equal. ");
    }
    else {
        printf(" invalid syntax !! ");
    }
    
    return 0;
}
