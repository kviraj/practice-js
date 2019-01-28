#include<stdio.h>
int main()
{
    int array[10];
    int elt,i,sum=0;
    printf("Enter the number of elements you want");
    scanf("%d",&elt);

    printf("The  %d  elements are ",elt);
    for(i=0;i<elt;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<elt;i++)
    {
        sum=sum+array[i];
    }   
       
    printf("%d",sum);
    return 0;
}