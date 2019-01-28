//copy all elements of one array to another

#include<stdio.h>
int main()
{
    int array1[5]={15,37,98,63,2};
    int second[5];
    int i;

    for(i=0;i<5;i++)
    {
        second[i]=array1[i];
    }

    for(i=0;i<5;i++)
    {
       printf("%d\n",array1[i]);
    }   

    for(i=0;i<5;i++)
    {
       printf("Copied array is %d\n",second[i]);
    }   
    return 0;
}