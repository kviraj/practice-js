#include<stdio.h>
int main()
{
    float area,length,breadth,perimeter;
    
    printf("Enter the length and breadth of rectangle");
    scanf("%f%f",&length,&breadth);
    area=length * breadth;
    
    perimeter=2*(length+breadth);
    printf("Area of rectangle is %f\n",area);
    printf("Perimeter of rectangle is %f\n",perimeter);

    if(area>perimeter)
    {
        printf("Area of rectangle is greater");
    }
    else
    {
        printf("Perimeter of rectangle is greater");

    }
  return 0;
}    