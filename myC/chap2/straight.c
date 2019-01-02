#include<stdio.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,slope1,slope2;
    
    printf("Enter first point");
    scanf("%f%f",&x1,&y1);

    printf("Enter second point");
    scanf("%f%f",&x2,&y2);

    printf("Enter third point");
    scanf("%f%f",&x3,&y3);


    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);

    if(slope1==slope2)
    {
        printf("Falls on straight line");
    }
    else
    {
        printf("Does not fall on straight line");
    }
   return 0;
}    