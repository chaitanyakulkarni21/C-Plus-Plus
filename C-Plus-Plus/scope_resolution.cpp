/* C++ Program to demonstrate the use of scope resolution operator */
#include<bits/stdc++.h>
using namespace std;

class Geeks
{
	//Access Specifiers
	public:
			//Data Members
			string geekname;
			int id;
			//printname() not defined inside the class definition
			void printname();
			//printid() defined inside the class definition
			void printid()
			{
				cout<<"Geek id is : "<<id;
			}
};

//Definition of printname outside the class definition using scope resolution operator
void Geeks :: printname()
{
	cout<<"Geeks name is : "<<geekname;
}
int main()
{
	Geeks obj1;
	obj1.geekname = "Chaitanya";
	obj1.id = 15;
	//call printname()
	obj1.printname();
	cout<<endl;
	//call printid()
	obj1.printid();
}
