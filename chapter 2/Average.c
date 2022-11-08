// Write a program to print the average of 3 numbers.

#include<stdio.h>

int main() {

    float a,b,c ;

    printf("\n Let as find the Average of 3 Numbers .");

    printf("\n Input a : ");
    scanf("%f",&a);

    printf("\n Input b : ");
    scanf("%f",&b);

    printf("\n Input c : ");
    scanf("%f",&c);

    printf("\n The Average of this three is - %f \n", (a + b + c)/3);

    return 0;
}