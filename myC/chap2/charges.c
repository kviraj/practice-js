#include<stdio.h>
#include<stdlib.h>

int main()
{
    int fine;
    printf("Enter the no of Days");
    scanf("%d",&fine);

    if(fine<=5)
    {
        printf("fine is 50 paise");

    }

    else if(fine>=6 && fine<=10)
    {
        printf("fine is 1 rupee");

    }
   else if(fine>=10 && fine<30)
    {
        printf("fine is 5 rupees");

    }
    else if(fine>=30)
    {
        printf("Your membership is cancel");

    }
    return 0;
}