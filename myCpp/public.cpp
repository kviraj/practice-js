//Public

#include<iostream>
using namespace std;

class Circle
{
    public:
        double radius;
        double compute_area()
        {
            return 3.14*radius*radius;
        }
};


int main()
{
    Circle object;

    object.radius=2;
    cout << "Radius is:" << object.radius << "\n"; 
    cout << "Area is:" << object.compute_area(); 
    return 0; 
} 
