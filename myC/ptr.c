#include<stdio.h>
#include<stdlib.h>

void swapDemo()
{
     int a,b;
     int *p=&a,*p1=&b;

}

    int main()
    {
        swapDemo();
     int a,b;
     int *p=&a,*p1=&b;



       printf("Input two integers (a & b) to swap\n");
       scanf("%d%d", &a, &b);
       *p=*p+*p1;
       *p1=*p-*p1;
       *p=*p-*p1;

       printf("a = %d\nb = %d\n",a,b);
       return 0;
    }
