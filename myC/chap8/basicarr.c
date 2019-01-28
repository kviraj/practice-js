//Write a C program to read and print elements of array.

#include<stdio.h>
int main()
{
    int array[10];
    int num,i;

    printf("Enter the size\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
       
    for(i=0;i<num;i++)
    {
        printf("The elements are %d\n",array[i]);
    }    
    return 0;
}    