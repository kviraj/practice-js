#include<stdio.h>
int main()
{
    int n,a=0,b=1,result=0,i;
    printf("Enter the term");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a=b;
        b=result;
        result=a+b;
    }
    printf("%d",result);
   return 0; 
}