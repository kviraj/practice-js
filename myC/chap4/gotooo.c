#include<stdio.h>
#include<stdlib.h>

int main()
{
    int goal;
    printf("Enter the no. of goals score\n");
    scanf("%d",&goal);

    if(goal>5)
    {
            goto sos;

    }
    
    else
    {
        printf("you lose the match\n");
        exit(1);
    }

     sos:
        printf("you won the match\n");

     return 0;
}