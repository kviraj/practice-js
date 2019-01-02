#include<stdio.h>
int main()
{
    int a,b,absolute;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    

    if(b>a)
    {
        absolute=b-a;
        printf("Absolute value is %d",absolute);
    }

    else
    {
        absolute=a-b;
        printf("Absolute value is %d",absolute);
    }
   
   return 0;
}    
