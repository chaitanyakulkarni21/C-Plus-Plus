/* Pointer to objects */
#include<iostream>
using namespace std;

class cl{
	int i;
	public:
		cl(int j)
		{
			i = j;
		}
		int get_i()
		{
			return i;
		}
};

int main()
{
	cl ob(88),*p;
	p = &ob;		// get address of ob
	
	cout<< p->get_i();		// use -> to call get_i()
	return 0;
}
