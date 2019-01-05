#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;

    printf("Address of i=%d\n",&i);   // They have Solved
    printf("Address of i=%d\n",j);    //all
    printf("Address of i=%d\n",*k);   //probabilities

    printf("Address of j=%d\n",&j);
    printf("Address of j=%d\n",k);

    printf("Address of k=%d\n",&k);

    printf("Value of j=%d\n",&i);
    printf("Value of j=%d\n",j);

    printf("Value of k=%d\n",&j);
    printf("Value of k=%d\n",k);

    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",**k);
    printf("Value of i=%d\n",*&i);

    return 0;
}
