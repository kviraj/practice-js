#include<stdio.h>
int main()
{
    int expe,qual,salary;
    char g,m,f;
    printf("Enter gender");
    scanf("%c",&g);
    printf("Enter experience and qualification(0=g,1=pg)*");
    scanf("%d%d",&expe,&qual);

    if(g=='m')
    {
         if(expe>=10 && qual==1)
        salary=15000;
        
        else if(expe>=10 && qual==0)
        salary=10000;

        else if(expe<10 && qual==1)
        salary=10000;  
    
        else if(expe<10 && qual==0)
        salary=7000;
    }


    else(g=='f');
    {
         if(expe>=10 && qual==1)
        salary=12000;

        else if(expe>=10 && qual==0)
        salary=9000;

        else if(expe<10 && qual==1)
        salary=10000;  
    
        else if(expe<10 && qual==0)
        salary=6000;
    }
    printf("Salary is %d",salary);
    return 0;
}