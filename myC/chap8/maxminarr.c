//C program to find maximum and minimum element in array

#include<stdio.h>
int main()
{
    int array[10];
    int num,i,max,min,smax;

    printf("Enter the size\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);
   for(i=0;i<num;i++)
    {
        scanf("%d",&array[i]);
    }

  max=array[0];
  min=array[0];
       
   for(i=0;i<num;i++)
   {
       if (array[i]>max)
       {
           
           smax=max;
           max=array[i];//Before declaring the value of max is second-max
       }
        else
        {
            min=array[i];
        }
   }
   printf("maximum elements is %d and minimum elements is %d",max,min);
   printf("second max element is %d\n",smax);
   return 0;
}   