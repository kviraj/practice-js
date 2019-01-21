#include<stdio.h>
int main()
{
    int num,last,first;
    printf("Enter the number");
    scanf("%d",&num);

         last=num%10;
         
    printf("last digit is %d\n",last);

    first=num;
    while(first >= 10)
    {
        first = first / 10;
    }

    printf("first digit is %d\n",first);
   return 0;
}   





/*
first number digit logic

while(num !=0 )
    {
         first = num%10;
        num=num/10;
       
    }*/