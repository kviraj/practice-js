#include<stdio.h>
int main()
{
   char c,z,a;
   printf("Enter character");
   scanf("%c",&c);

  if(c>='A' && c<='Z')
   {
       printf("It is in Upper case");
   }

     else if(c>='a' && c <='z')
    {
        printf("It is in Lower case");
    }

    else if(c>'0' && c<'9')
    {
        printf("It is in digit");
    }

    else 
    {
        printf("It is in special symbol");
    }
    return 0;
}