/* C++ program to demonstrate constructors */
#include<bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
		int id;
		//Default constructor
		Geeks()
		{
			cout<<"Default Constructor called"<<endl;	
			id = -1;
		}	
		//Parameterised constructor
		Geeks(int x)
		{
			cout<<"Parameterised constructor called"<<endl;
			id = x;
		}
};
int main()
{
	//obj1 will call the default constructor
	Geeks obj1;
	cout<<"Geeks id is : "<<obj1.id<<endl;
	//obj2 will call the parameterised constructor
	Geeks obj2(21);
	cout<<"Geeks id is :"<<obj2.id<<endl;
	return 0;
}
