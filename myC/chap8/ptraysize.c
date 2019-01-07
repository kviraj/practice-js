#include<stdio.h>
int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("Value of i=%d\n",i);
    printf("Value of j=%f\n",j);
    printf("Value of k=%c\n",k);

    x=&i;
    y=&j;
    z=&k;

    printf("Original address in x=%d\n",x);
    printf("Original address in y=%d\n",y);
    printf("Original address in z=%d\n",z);

    x++;
    y++;
    z++;

    printf("New address in x=%d\n",x);
    printf("New address in y=%d\n",y);
    printf("New address in z=%d\n",z);


return 0;
}



