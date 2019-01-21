#include<stdio.h>
int main()
{
    int i,sumOfEvenNum , sumOfOddNum;
    i = 0;
    while(i<=100)
    {
       
        if(i%2==0)
        {     
            sumOfEvenNum=sumOfEvenNum+i;  
           
        }
        else
        {
            sumOfOddNum=sumOfOddNum+i; 
        }
           
        i++;
    }
        printf("%d\n",sumOfOddNum);
        printf("%d\n",sumOfEvenNum);

   return 0; 
}