#include<stdio.h>
int main()
{
    int quantity,discount;
    printf("Enter the quantity :");
    scanf("%d",&quantity);

    if(quantity>1000)
    {
       discount=quantity*10/100;
        printf("Discounted amount is %d",discount);
    }
return 0;
}