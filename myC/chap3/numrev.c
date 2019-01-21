#include<stdio.h>
int main()
{
    int num,rev,c=0 ;
    printf("Enter the number");
    scanf("%d",&num);

  while(num>0)
    {
        rev=num%10;
        num=num/10;
        c=(c*10)+rev;
    }
    printf("%d",c);
return 0;
}