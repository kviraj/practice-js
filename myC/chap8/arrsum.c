#include<stdio.h>
int main()
{
    int i,sum=0,a;
    int array[10]={27,82,13,93,2,4,84,76,59,18};

    for(i=0;i<10;i++)
    {
        sum=sum+array[i];
       
    }
     printf("Addition is %d\n",sum);
return 0;
}