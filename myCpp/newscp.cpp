#include<iostream>
using namespace std;
int i=10;

int main()
{
    int i=20;
    cout<<"local i is"<<i<<"global i is"<<::i<<endl;
    {
        i=30;
        cout<<endl<<i<<""<<::i;
    }
    cout<<endl<<i<<""<<::i<<endl;
    return 0;
}    