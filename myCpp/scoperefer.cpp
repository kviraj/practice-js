#include<iostream>
using namespace std;
int  m=10;              //globally declared
int main()
{
    int m=20;           //redeclared in local to main

    {
        int k=m;        //reference is used
        int m=30;       //declared locally


        cout<<"We are in inner block \n";
        cout<<"k = "<<k<<"\n";
        cout<<"m = "<<m<<"\n";
        cout<<"::m = "<<::m<<"\n"; 
    }

        cout<<"We are in outer block \n";
        cout<<"m = "<<m<<"\n";
        cout<<"::m = "<<::m<<"\n"; 

return 0;
}

/*m is declared at 3 places
It is noted that ::m will always refer to global m.
In inner block,::m refers to the value 10 and not 20 */