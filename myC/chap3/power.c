#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,i=1,result=1;
    printf("Enter two numbers");
    scanf("%d%d",&num1,&num2);

    while(i<=num2)
    {
//       result = pow(num1, num2);
    result=result*num1;
   i++;
    }
        printf("result is %d",result);
        
    
    return 0;
}