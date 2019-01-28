//Program to print negative elements in array
//& to count total number of negative elements in an array.

#include<stdio.h>
int main()
{
    int array[10];
    int num,i,count=0;

    printf("Enter the size\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<num;i++)
    {
    if(array[i]<0)
    {
    
        printf("The negative elements are %d\n",array[i]);
        count++;
    }
    }    
    printf("Total negative elements are %d",count);
    return 0;
}    