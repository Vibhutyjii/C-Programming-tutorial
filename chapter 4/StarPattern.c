/*  Search on what a "nested loop" is & print this pattern using it.

        * * * * *
        * * * * *
        * * * * *
        * * * * *
*/


#include<stdio.h>

int main()
{
    int num;

    printf("Enter Any number : ");
    scanf("%d",&num);


    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++) {
            printf(" * ");
            
        }
    printf("\n");
    }

    return 0;
}
