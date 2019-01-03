#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number\n");
    scanf("%d",&num);

    for(i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            printf("Not prime no.\n");
            break;
        }
        else
        {
            printf("Prime no.\n");
            break;
        }
    }
 return 0;
}    