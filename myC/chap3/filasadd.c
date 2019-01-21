#include<stdio.h>
int main()
{
    int num,last,first,sum;
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
    
    sum=first+last;
    printf("Addition of first and last digit is %d",sum);
   return 0;
}   

