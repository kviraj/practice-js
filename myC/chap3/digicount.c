#include<stdio.h>
int main()
{
    int temp,num,counter;
    printf("Enter the number");
    scanf("%d",&num);
    
    counter=0;
    while(num>0)
    {
        temp=num%10;
        counter++;
        num=num/10;

    }
    printf("Total digits=%d",counter);
    return 0;
}