#include<iostream>
using namespace std;

struct employee
{
    char name[20];
    int age;
    float salary;
};

void modc(employee *);
void modcpp(employee &);

int main()
{
    employee e1={"sanjay",3208.00}
    employee e2={"jay",5442.00}


modc(&e1);
cout<<endl<<e1.name<<endl<<e1.age<<endl<<e1.salary<<endl;

modcpp(e2);
cout<<endl<<e2.name<<endl<<e2.age<<endl<<e2.salary<<endl;
return 0;
}

void modc(employee*e)
{
    strcpy(e->name,"santosh");
    e->age,"45";
    e->salary,"2455.22";
}
void modcpp(employee &e)
{
    strcpy(e.name,"viraj");
    e.age,"23";
    e.salary,"30000.45";
}