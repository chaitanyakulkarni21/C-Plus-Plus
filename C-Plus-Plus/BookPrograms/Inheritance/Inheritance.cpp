/* Single Inheritance */

#include<iostream>
using namespace std;

class base {
	int i,j;
	public:
		void set(int a,int b){
			i=a;
			i=b;
		}
		void show(){
			cout << i << " " << j << " "<<endl;
		}
};

class derived : public base{
	int k;
	public: 
		derived (int x){
			k=x;
			}
			void showk(){
				cout << k << " "<<"\n";
		}
};

int main()
{
	derived ob(3);
	
	ob.set(1,2);		// access member of base
	ob.show();			// access member of base class 
	
	ob.showk();			// access member of derived class 
	
	return 0;
}
