#include<stdio.h>
int main()
{
    int menu,last,n,Prime,i,num,fact;
  //  printf("Which case you want\n 1.Factorial\n 2.Prime no.\n 3.Even/odd\n4.Exit");
   printf("Which case you want\n");
    scanf("%d",&menu);

    switch(menu)
    {
    case 1: //Factorial
            
            
           // int num,i,fact=1;
            printf("Enter the number F :\n");
            scanf("%d",&num);

            for(i=1;i<=num;i++)
            {
            fact=fact*i;
            printf("The factorial is:%d\n",fact);
            }
    case 2://Prime
               
                printf("Enter the number P :\n");
                scanf("%d",&num);

                for(i=2;i<=num+1;i++)
                {
                    if(num%i==0)
                    {
                        printf("Not prime no.\n");
                        break;
                    }
                    else
                    {
                        printf("Prime no.\n");
                        break;
                    }
                }

    case 3: //oddeven
                
                {
                    int integer;
                    printf("Enter any no.\n");
                    scanf("%d",&integer);

                if(integer%2==0)
                {
                    printf("Even no.\n");
                }
                else
                {
                    printf("odd no.\n");
                }
   
                }


                    default:printf("Exit\n");
    }
    
    return 0;
}    