#include<stdio.h>
int main()
{
    char mu,mf,M,U,B,G;
    int age;
    printf("Enter marital status,sex,age\n");
    scanf("%c%c%d",&mu,&mf,&age);

    if(mu=='M')
    {
        printf("Driver is insured\n");
    }
    else
    {
        
            if(mf=='B' && age>30)
            {
                printf("Male driver is insured\n");
            }
            else(mf=='G' && age>25);
            {
                printf("Female driver got insured\n");
            }   
        
    }
return 0;
}