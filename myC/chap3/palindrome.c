#include<stdio.h>
int main()
{
    int num,rev,c=0,pal=0;
    printf("Enter the number");
    scanf("%d",&num);
pal = num;
    
  while(num>0)
    {
        rev=num%10;
        num=num/10;
        c=(c*10)+rev;
    }
     printf("%d\n",c);
    
      
    if(c==pal)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}