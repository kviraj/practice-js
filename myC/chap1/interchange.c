#include<stdio.h>
#include <stdlib.h>

int main()
{
    int c,d,result;
    printf("Enter the no.\n");
    scanf("%d",&c);

    printf("Enter the no.\n");
    scanf("%d",&d);

    c=c+d;
    d=c-d;
    c=c-d;
    printf("Interchange values are %d\n%d\n:",c,d);
    return 0;
}