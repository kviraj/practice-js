#include<stdio.h>
int main()
{
    int nest;
    printf("hello 1 or 2");
    scanf("%d",&nest);

    if(nest==1)
    {
        printf("right");
    }
    else
    {   
        if(nest==2)
        {
            printf("Good morning");
        }
        else
        {
            printf("Good night");
        }
    }

return 0;
}
