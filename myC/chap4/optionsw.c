#include<stdio.h>
int main()
{
    char ch;

    printf("Enter the alphabet");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'g': 
        case 'G':
                  printf("I am in Gangnum style case\n");
                  break;

        case 'm': 
        case 'M':
                  printf("I am in morocco case\n");
                  break;
        
        case 'p':
        case 'P':
                  printf("I am in pogo case\n");
                  break;


        default:  printf("I am in dead case\n");

    
    }
return 0;
}