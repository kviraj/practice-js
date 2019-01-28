#include <bits/stdc++.h> 
using namespace std; 
  
//Base class 
class Parent 
{ 
    public: 
      
     void my()
        {
            cout<<"welcome"<<endl;  //This o/p will be printed because  
                                    //priority is to data types.              
        }
}; 
   
// Sub class inheriting from Base Class(Parent) 
class Child : public Parent 
{ 
    public: 
      void my()
        {
            cout<<"oops"<<endl;
        }
}; 
  
//main function 
int main()  
   { 
       	Parent par =Child();
        par.my();

        // Child ch=Parent();     This statement will not work because child 
        // ch.my();             class has all properties of parent class but parent
        //                  class does not have all properties of child class.
          
        return 0; 
   }  