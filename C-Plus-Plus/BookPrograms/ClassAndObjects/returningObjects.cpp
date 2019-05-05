/* Returing Objects */

#include<iostream>
using namespace std;

class myclass{
	int i;
	public:
		void set_i(int n)
		{
			i = n;
		}
		int get_i()
		{
			return i;
		}
		myclass()
		{
			cout<< "Iam inside constructor "<<endl;
		}
		~myclass()
		{
			i=0;
			cout<<" Iam inside Destructor"<<endl;
			cout<<"i = "<<i<<endl;
		}
};

myclass f();	// return object of type myclass 

int main()
{
	myclass o;
	cout<<"Iam in main()"<<endl;
	o = f();
	cout << "Object Value Returned : "<<o.get_i()<<"\n";
	return 0;
}

myclass f()
{
	cout<<"Iam in f()"<<endl;
	cout<<"Object created"<<endl;
	myclass x;
	cout<<"11111111 "<<endl;
	x.set_i(1);
	cout<< "22222222"<<endl;
	
	return x;
}
