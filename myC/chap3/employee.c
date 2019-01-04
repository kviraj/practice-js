#include<stdio.h>
int main()
{
    int i,hr=0,overtime,mn;
 
    for(i=1;i<=10;i++)
    {
        printf("Enter the time: ");
        scanf("%d",&hr);
        if(hr>=40)
        {
            overtime=hr-40;
            mn=overtime*12;
            printf("%d\n",mn);
        }
    else
        {
            printf("No Overtime\n");
        }
}
    
return 0;
}