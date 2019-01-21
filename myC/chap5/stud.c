#include<stdio.h>
int calsum(int x,int y,int z);
int average(int d);
int main()
{
    int a,b,c,sum,d,ag;
    printf("Enter marks of 3 subject :");
    scanf("%d%d%d",&a,&b,&c);
    sum=calsum(a,b,c);
    printf("Sum is %d\n",sum);
    ag=average(sum);
    printf("average is : %d\n",ag);
    return 0;
}

int calsum(int x,int y,int z)
{
    int d;
    d=x+y+z;
    return(d);
}
int average(int sum)
{
    int ag;
    ag=sum/3;
    return 0;
}