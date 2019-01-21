#include<stdio.h>
int main()
{
    int num,last,first,temp;
    printf("Enter the number");
    scanf("%d",&num);
      
    first=num;
    while(first >= 10)
    {
        first = first / 10;
    }
     printf("first digit is %d\n",first);


    last=num%10;
    printf("last digit is %d\n",last);



    temp=first;
    first=last;
    last=temp;

    printf("swap values are %d %d",first,last);
   return 0;
}   

