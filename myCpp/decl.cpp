#include<iostream>
using namespace std;
int main()
{
    int f;                   //c & j are not declared at the beginning 
    cin >> f;                //of the function main().  

    int c=(f-32)*5/9;
    cout<< c;

    for(int j=10;j<=100;j++)
    cout<<endl<<j<<endl;
    return 0;
}