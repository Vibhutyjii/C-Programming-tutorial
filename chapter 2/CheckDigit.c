// Write a program to check if given character is digit or not .

#include<stdio.h>


int main()
{
    char c;
    printf("Enter a Character : ");
    scanf("%c",&c);

    if (c >='0' && c<='9')
    {
        printf("Charcter is digit : %c",c);
    }
    else {
        printf("Charcter is not digit : %c",c);
    }

    return 0;
}
