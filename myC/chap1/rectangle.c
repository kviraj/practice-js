#include<stdio.h>
#include <stdlib.h>

int main()
{
    float area,length,breadth,perimeter;
    float radius,circumference,areac;

    printf("Enter the length and breadth of rectangle");
    scanf("%f%f",&length,&breadth);
    area=length * breadth;
    perimeter=2*(length+breadth);
    printf("Area of rectangle is %f\n",area);
    printf("Perimeter of rectangle is %f\n",perimeter);

    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    areac=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("Area of circle is %f\n",areac);
    printf("Circumference of circle is %f\n",circumference);

    return 0;
}