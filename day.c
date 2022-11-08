// Write a program to check if given character is digit or not .

#include<stdio.h>
#include<ctype.h>


int main() {

    char obj = "a";

    printf(" Let's find out your input is digit or not !! \n");
    

    if (isdigit(obj) == 0)
    {
        printf("\n %c it is not an digit .", obj);
    }
    else {
        printf("\n %c it is not an digit .", obj);
    }


    return 0;
}