/* Object Assignments */
#include<iostream>
using namespace std;

class myclass{
	int i;
	public:
		void set_i(int i)
		{
			this->i = i;	//This keyword used
		}
		int get_i()
		{
		 	return i;
		}
		myclass()
		{
			cout<< "I am in Constructor"<<endl;
		}
		~myclass()
		{
			cout<< "I am in Destructor"<<endl;
		}
};

int main()
{
	myclass ob1,ob2;
	ob1.set_i(99);
	ob2 = ob1;		// assign data from ob1 to ob2
	cout << "This is ob2's i : "<< ob2.get_i()<<endl;
	return 0;
	
	
}
