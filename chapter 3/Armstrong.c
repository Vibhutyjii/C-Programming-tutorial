// Write a program to check if a given number is Armstrong number or not.
// (Search what is Armstrong number)

#include<stdio.h>

int main()
{
    /* Search what is Armstrong number. */
    int a,r,copy;
    int arm = 0;


    printf("Enter the number : ");
    scanf("%d",&a);
    
    
    copy = a;

    while (a>0)
    {
        r = a%10;
        arm = (r*r*r) + arm;
        a = a/10;
    }

    if (copy == arm) {
        printf("Armstrong Number.");
    }
    else {
        printf("Not a Armstrong Number.");
    }
    
    return 0;
}
