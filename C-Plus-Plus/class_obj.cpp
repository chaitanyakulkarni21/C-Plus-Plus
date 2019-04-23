/* C++ program to demonstrate the concept of classes and objects */
#include<bits/stdc++.h>
using namespace std;
class Geeks
{
	//Access Specifiers
	public:	
			//Data Members
			string geekname;
			//Member functions()
			void printname()
			{
				cout<<"Geek name is : "<<geekname;
			}
};
int main()
{
	//Declare an object of class geeks 
	Geeks obj1;
	//Accessing data member
	obj1.geekname = "Chaitanya";
	//Accessing member function
	obj1.printname();
	return 0;
}
