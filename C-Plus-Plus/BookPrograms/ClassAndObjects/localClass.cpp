/* Local Class */

#include<iostream>
using namespace std;

void f();
int main()
{
	f();
	// myclass not known here 
	
	return 0; 
}

void f()
{
	class myclass {
		int i;
		public:
			void put_i(int n)
			{
				i = n;
			}
			int get_i()
			{
				return i;
			}
	} ob;
	
	ob.put_i(10);
	cout<< "i = "<<ob.get_i();
}
