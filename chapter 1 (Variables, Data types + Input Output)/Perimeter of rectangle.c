// Write a program to calculate perimeter of rectangle. Take sides, a & b ,from the user.

#include<stdio.h>

int main() {

    int a,b;

    printf("Let as find out Perimeter of a Rectangle. \n");

    printf("\n Enter the lenght : ");
    scanf("%d", &a);

    printf("\n Enter the breadth : ");
    scanf("%d", &b);

    printf("\n Perimeter of a Rectangle - %d ", 2 * (a + b));

    return 0;
}