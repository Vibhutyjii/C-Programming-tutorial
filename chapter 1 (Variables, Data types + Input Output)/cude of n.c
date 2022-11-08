// Take a number(n) from user & output its cube (n*n*n) .

#include<stdio.h>
#include<math.h>


int main() {

    int side ;


    printf("\n Lets find out the cube .");

    printf("\n Enter the side of the cube : ");
    scanf("%d", &side);

    printf("\n The cude of n is - %f", pow(side,3));   // pow is use to find the power of an number

    return 0;
}