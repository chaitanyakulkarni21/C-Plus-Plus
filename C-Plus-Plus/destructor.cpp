/* C++ programs to demonstrate destructor */
#include<bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
		int id;
		//Definition for Destructor
		~Geeks()
		{
			cout<<"Destructor is called for id : "<<id<<endl;	
		}	
};
int main()
{
	Geeks obj1;
	obj1.id = 7;
	int i = 0;
	while(i<5)
	{
		Geeks obj2;
		obj2.id = i;
		i++;
	}// Scope of obj2 ends here
	return 0;
}	// Scope of obj1 ends here
