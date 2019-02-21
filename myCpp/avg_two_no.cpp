#include <iostream>
using namespace std;
int main()
{
    float no1,no2,sum,avg;            //Declaring      
    cout<<"Enter two numbers";         //Reads number  
    cin>>no1>>no2;                     // from keyboard

    sum=no1+no2;
    cout<<"Sum is "<<sum<<"\n";


    avg=sum/2;
    cout<<"Average is "<<avg;


    cout<<"Sum is "<<sum 
        <<"Average is "<<avg;


    return 0;
}