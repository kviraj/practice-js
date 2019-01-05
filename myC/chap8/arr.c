#include<stdio.h>
int main()
{
    
    int i,sum=0,avg;
    int marks[3]={44,67,97};  //Declaration of array

for(i=0;i<3;i++)
{
   // printf("Enter the marks");
    //scanf("%d",&marks[i]);  //storing data in array
    sum=marks[i]+sum;
}

avg=sum/3;
printf("Average marks of 3 students are %d",avg);


return 0;
}