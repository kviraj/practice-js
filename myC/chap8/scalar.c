

#include<stdio.h>
#define MAXROW 100
#define MAXCOL 100

int main()
{
    int matrix[MAXROW][MAXCOL];
    int i,j,r,c,scalar,result;

    printf("Enter the number of rows");
    scanf("%d",&r);
    printf("Enter the number of columns");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf(" %d",matrix[i][j]);
        }
        printf("\n");
    }

    printf("Enter the scalar");
    scanf("%d",&scalar);
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            result=matrix[i][j]*scalar;
            printf(" %d ",result);
        }
                printf("\n");

    }        


    return 0;
}