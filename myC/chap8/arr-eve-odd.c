//C program to count total number of even and odd elements in an array.

#include<stdio.h>
int main()
{
    int array[10];
    int num,i,count=0,counter=0;

    printf("Enter the size\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }
       
    for(i=0;i<num;i++)
    {
        printf("The element is %d\n",array[i]); 
        
    
        if(array[i]%2==0)
        {
            printf("Even no.\n");
            count++;
        }
        else
        {
            printf("odd no.\n");
            counter++;
        }
    }  
    printf("Even are %d \n Odd are%d",count,counter);
    return 0;
}    