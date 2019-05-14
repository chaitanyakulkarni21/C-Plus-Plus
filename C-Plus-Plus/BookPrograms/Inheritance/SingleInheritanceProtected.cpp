/* Inheritance 2 */

#include<iostream>
using namespace std;

class base {
	protected:
		int i,j;		// private to base but accessible by derived
		public:
			void set (int a, int b)
			{
				i = a;
				i = b;
			}
			
			void show()
			{
				cout << i << " "<< endl;
			}
};

class derived : public base
{
	int k;
	public:
			//	derived may access base's i and j
		void setk()
		{
			k = i*j;
		}
		void showk()
		{
			cout << k << " " << endl;
		}
};

int main()
{
	derived ob;
	
	ob.set(2,3);	// ok, known to derived
	ob.show();		// ok, known to derived
	
	ob.setk();
	ob.showk();
}
