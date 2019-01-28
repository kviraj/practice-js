#include<stdio.h>
#define MAXROWS 100
#define MAXCOLUMNS 100

#define SECROWS 100
#define SECCOLUMNS 100
#define C 100
int main()
{
    int matrix[MAXROWS][MAXCOLUMNS];
    int array[SECROWS][SECCOLUMNS];
    int additionArray[SECROWS][SECCOLUMNS];
  int r,c,i,j,secr,secc,a,b,result,sum,row,col;

    printf("Enter the size of row");
    scanf("%d",&row);
    printf("Enter the size of coloumn");
    scanf("%d",&col);

//  second
   // printf("Enter the number of i for second matrix");
   // scanf("%d",&secr);
   // printf("Enter the number of j for second matrix");
   // scanf("%d",&secc);


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the elements for first matrix %d %d ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    //matrix 2
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter the elements for second matrix %d %d ",i+1,j+1);
            scanf("%d",&array[i][j]);
        }
    }


//  first
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %d",matrix[i][j]);
        }

        printf("\n");
    }

//  second
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf(" %d",array[i][j]);
        }
        printf("\n");
    }
        printf("\n");

//multiplication
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
       {
            sum = 0;
            
            for(int k=0; k<row; k++)
            {

               
                sum += matrix[i][k] * array[k][j];

                // printf(" Sum = %d",array[i][j] );
                // printf(" Sum = %d",matrix[i][j] );
                // printf(" Sum = %d",sum );
            }

            additionArray[i][j] = sum;
        }
    }



    printf("\nProduct of matrix A * B = \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", additionArray[i][j]);
        }
        printf("\n");
    }



return 0;
}