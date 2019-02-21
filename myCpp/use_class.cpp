#include<iostream>
using namespace std;                //1.Include files
class person
{
    char name[30];                  //2.class declaration
    int age;

public:
    void getdata(void);
    void display(void);
};

void person::getdata(void)             //function is written
{
    cout<<"Enter name:";               //3.Member function definition
    cin>>name;
    cout<<"Age:";
    cin>>age;
}

void person::display(void)              //function is written
{
    cout<<"Name:"<<name<<"\n";
    cout<<"Age:"<<age;
}

int main()                              //function is called
{                                       //4.Main function prog
    person object;                          
    object.getdata();   
    object.display();

    return 0;
}