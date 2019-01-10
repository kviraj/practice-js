/*With the help of scope resolution operator
we can access global variable in a function
*/

#include<iostream>
using namespace std;
int a=10;

int main()
{
    int a=15;
    cout<<"Local variable a="<<a<<"Global variable"<<::a<<endl;
    ::a=20;
    cout<<"Local variable a"<<a<<"Global variable"<<::a<<endl;
    return 0;

}