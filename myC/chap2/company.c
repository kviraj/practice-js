#include<stdio.h>
int main()
{
    int curry,joyy,totaly,bonus;
    printf("Enter the currentyear and the year of joining");
    scanf("%d%d",&curry,&joyy);
    totaly=curry-joyy;
    if(totaly>3)
    {
        bonus=2500;
        printf("bonus=Rs.%d\n",bonus);
    }
    return 0;

}