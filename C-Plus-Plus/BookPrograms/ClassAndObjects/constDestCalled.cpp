/* When Constructors and Destructors are Executed */

#include<iostream>
using namespace std;
class myclass {
	public:
		int who;
		myclass(int id);
		~myclass();
} 		glob_obj(1),glob_obj2(2);

myclass :: myclass(int id)
{
	cout<< "Initializing "<< id << "\n";
	who = id;
}

myclass :: ~myclass()
{
	cout<< "Destructing "<<who<<"\n";
}

int main()
{
	myclass local_obj(3);
	cout<< "This will not be first line displayed. \n";
	myclass local_obj2(4);
	return 0;
}
