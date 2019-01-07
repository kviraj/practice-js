#include<stdio.h>
int main()
{
    int i,a,b,c;
    int array[5]; //={a=18,b=38,c=33};
    printf("Enter the numbers");
    scanf("%d%d%d",&a,&b,&c);


    for(i=0;i<=4;i++)
    {
        if(a>b && a>c)
        {
            printf("This is greatest no. %d",a);
            break;
        }
        else if(a<b && b>c)
        {
            printf("This is greatest no. %d",b);
            break;
        }
        else
        {
            printf("This is greatest %d",c);
            break;
        }
    }
   return 0;
}    