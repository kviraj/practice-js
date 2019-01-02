#include<stdio.h>
int main()
{     float h,c,t;

    printf("Enter the Hardness,Carbon content and tensile strenght");
    scanf("%f%f%f",&h,&c,&t);

    if(h>50 && c<0.7 && t>5600)
    {
        printf("Grade of Steel is : 10");
    }
    else if (h>50 && c<0.7)
    {
        printf("Grade of Steel is : 9");
    }

    else if (c<0.7 && t>5600)
    {
        printf("Grade of Steel is : 8");
    }

    else if (h>50 && t>5600)
    {
        printf("Grade of Steel is : 7");
    }

      else if (h>50 || c<0.7 || t>5600)
    {
        printf("Grade of Steel is : 6");
    }

  else
    {
        printf("None");
    }
    return 0;
}

