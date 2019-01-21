#include<stdio.h>
int main()
{
    char c='y';

    switch(c)
    {
        case 'g': printf("I am in Gangnum style case\n");
                  break;
        case 'm': printf("I am in morocco case\n");
                  break;
        case 'p': printf("I am in pogo case\n");
                  break;
        default:printf("I am in dead case\n");

    
    }
return 0;
}