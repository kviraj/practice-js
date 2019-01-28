#include <iostream>
using namespace std;

class Example
{
	private:
		int val;


/*  Proper format of oops concept
Writing function in class itself.*/

        void my() {
            cout<<"welcome"<<endl;
        }
	public:
		//function declarations
		void init_val(int v) 
        {
            my();
        };
		void print_val()
        {
            cout<<"oops concept";
        };
};

int main()
{
	//create object
	Example Ex;
	Ex.init_val(100);
	Ex.print_val();
	
	return 0;
}