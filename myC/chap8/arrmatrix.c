#include<stdio.h>
int main()
{
    int array[4][3];
    int i;

    for(i=0;i<=4;i++)
    {
        printf("Enter roll no. and marks\n");
        scanf("%d%d",&array[i][0],&array[i][1]);
    }

    for(i=0;i<=4;i++)
    {
        printf("%d%d\n",array[i][0],array[i][1]);
    }
  return 0;
}    