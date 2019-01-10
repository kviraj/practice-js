#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the number";
    cin >> yr;

    if(yr%4==0)
    {
        cout<<"It is Leap year";
    }
    else
    {
        cout<<"It is not Leap year";

    }
    return 0;
}