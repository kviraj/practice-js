//calling more than 1 function

#include<stdio.h>
void italy();
void japan();
void turkey();
int main()
{
    printf("This is main function\n");
    italy();
    printf("Back to Italy");
    //japan();
    //turkey();

 return 0;   
}

void italy()
{
    printf("Venice city located in Italy\n");
    japan();
    printf("Pizza is from Italy\n");
}

void turkey()
{
    printf("Non-veg is staple food in turkey\n");
}


void japan()
{
    printf("Hiroshima and Nagasaki were destroyed in WW2\n");
    turkey();
}
