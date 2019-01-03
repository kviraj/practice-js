#include<stdio.h>
int main()
{
    int r,c,sum;
    for(r=1,c=1;r<=3,c<=3;r++,c++)
    {
        //for(c=1;c<=3;c++)
        
            sum=r+c;
            printf("r=%d c=%d sum=%d\n",r,c,sum);
        
    }
    return 0;
}    
