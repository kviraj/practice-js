#include<stdio.h>
int main()
{
    int i,*j;
    int array[10]={10,39,34,83,48,48,21,17,03,11};

    for(i=0;i<10;i++)
    {
        printf("Address of %d\n",&array[i]);
        printf("Elements of %d\n",&array[i]);
    }
return 0;
}