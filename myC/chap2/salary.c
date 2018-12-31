#include<stdio.h>
int main()
{
    float basics,hra,da,grossly;
    
    printf("Enter the salary");
    scanf("%f",&basics);
    
    if(basics<1500)
    {
        hra=(basics*10.0)/100;
        da=(basics*90.0)/100;
    }
   
    else(basics >= 1500);
    {         
        hra=500;
        da=(basics*98.0)/100;
    }
   
    grossly=basics+hra+da;
    printf("Gross salary=Rs.%f\n",grossly);
    return 0;
}