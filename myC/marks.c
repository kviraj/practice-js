#include <stdio.h>
#include <stdlib.h>
int main()
{


    int marks;
    again:
    printf("Enter your marks\n");
    scanf("%d",&marks);

    if(marks<=34)
    {
        printf("Fail\n");
        goto again;
    }

    else if(marks>=35 && marks<=60)
    {
        printf("You are Pass");
    }

    else if(marks>=61 && marks<=74)
    {
        printf("First Class");
    }

    if(marks>=75)
    {
        printf("Distinction");
    }
    return 0;
}
